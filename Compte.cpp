#include "Compte.h"
#include"Date.h"
int Bank::Compte::count = 0;

Bank::Compte::Compte(double s, string dev, Date* d) : devise(dev), solde(s), createdon(d)
{
	count++;
	this->Numcompte = count;
	cout << "call for account constructor" << endl;

}

void Bank::Compte::afficherCompte() const
{
	cout << "***** info compte*****" << endl;
	cout << " numCompte : " << this->Numcompte << endl;
	cout << "solde : " << this->solde << " " << this->devise << endl;
	cout << " date creation : ";
	this->createdon->afficherDateNais();
}


void Bank::Compte::debiter(double montant)
{
	if (this->solde >= montant && montant > 0) {
		this->solde -= montant;
	}
	else {
		cout << "solde insuffisant" << endl;
	}
}

void Bank::Compte::crediter(double montant)
{
	if (montant > 0) {

		this->solde += montant;
	}
	else {
		cout << "montant invalide" << endl;
	}
}

Bank::Compte::~Compte()
{
	cout << "call for account destructor" << endl;
}

