#include "C_Epargne.h"
Bank::C_Epargne::C_Epargne(double s, string dev, Date* d, double t) : Compte(s, dev, d), tauxInteret(t)
{
	cout << "constructeur du compte epargne" << endl;
}
void Bank::C_Epargne::debiter(double montant) {
    if (montant <= 0) {
        cout << "montant invalide" << endl;
    }
    else {
        double interet = solde * tauxInteret / 100;
        this->solde+= interet;
        cout << "interet ajoute : " << interet << this->devise << ",nouveau solde = " << this->solde << endl;

        if (this->solde - montant < 100) {
            cout << "retrait refuse" << endl;
        }
        else {
            Compte::debiter(montant);
        }
    }
}
void Bank::C_Epargne::afficherCompte() const
{
    Compte::afficherCompte();
    cout << "taux d'interet: " << this->tauxInteret << "%" << endl;
}
Bank::C_Epargne::~C_Epargne() {
    cout << "destructeur du compte epargne " << endl;
}