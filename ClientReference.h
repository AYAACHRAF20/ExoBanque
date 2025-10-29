#pragma once
#include"Compte.h"
#include"Date.h"
using namespace std;
#include<iostream>
namespace Bank {
	class ClientReference
	{
	private:
		static int nbreinstance;
		static int idcount;
		int NumClient;
		string nom;
		string prenom;
		string CIN;
		Compte& compte;
		Date* Dnaissance;
		ClientReference(string, string, string, Date*, Compte&);
	public:
		void afficherClientR()const;
		static ClientReference creator(string, string, string, Date*, Compte&);
		~ClientReference();
	};
}

