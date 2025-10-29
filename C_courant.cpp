#include "C_courant.h"
Bank::C_courant::C_courant(double s, string dev, Date* d, double p) : Compte(s, dev, d), plafond(p)
{
	cout << "constructeur du compte courant" << endl;
}
void Bank::C_courant::debiter(double montant) {
    if (montant <= 0) {
        cout << "montant invalide" << endl;
    }
    else if (montant <= this->solde) {
        Compte::debiter(montant);
    }
    else if (this->solde - montant >= -plafond) {
        this->solde -= montant;  
        cout << "retrait effectue, nouveau solde = " << this->solde << endl;
    }
    else {
        cout << "retrait refuse" << endl;
    }
}

void Bank::C_courant::afficherCompte() const
{
    Compte::afficherCompte();
    cout << "plafond: " << this->plafond << endl;
}
Bank::C_courant::~C_courant() {
    cout << "Destructeur du compte courant" << endl;
}