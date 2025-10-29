#include "ClientReference.h"
int Bank::ClientReference::nbreinstance = 0;// initialisation d'un attribut de classe (static)
int Bank::ClientReference::idcount = 0;

Bank::ClientReference::ClientReference(string n, string p, string cin, Date* d, Compte& c) :nom(n), prenom(p), CIN(cin), compte(c), Dnaissance(d)
{
	nbreinstance++;
	idcount++;
	this->NumClient = idcount;
}

void Bank::ClientReference::afficherClientR() const
{
	cout << "****** info client *****" << endl;
	cout << "num_client : " << this->NumClient << endl;
	cout << "nom : " << this->nom << endl;
	cout << "prenom : " << this->prenom << endl;
	cout << "CIN : " << this->CIN << endl;
	this->Dnaissance->afficherDateNais();
	this->compte.afficherCompte();
}

Bank::ClientReference Bank::ClientReference::creator(string n, string p, string cin, Date* d, Compte& c)
{
	if (nbreinstance < 3) {
		return ClientReference(n, p, cin, d, c);
	}
	else {
		cout << "impossible la limite c'est 3 clients" << endl;
		exit(0);
	}
}

Bank::ClientReference::~ClientReference()
{
	nbreinstance--;
	cout << "call for client destructor" << endl;
}
