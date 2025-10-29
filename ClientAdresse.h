#pragma once
#include"Compte.h"
#include"Date.h"
using namespace std;
#include<iostream>
namespace Bank {
	class ClientAdresse
	{
	private:
		static int nbreinstance;
		static int idcount;
		int NumClient;
		string nom;
		string prenom;
		string CIN;
		Compte* compte;
		Date* Dnaissance;
		ClientAdresse(string, string, string, Date*, Compte*);
	public:
		void afficherClientA()const;
		static ClientAdresse creator(string, string, string, Date*, Compte*);
		~ClientAdresse();
	};
}

