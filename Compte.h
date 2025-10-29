#pragma once
#include"Date.h"
using namespace std;
#include<iostream>
namespace Bank {
	class Compte
	{
	private:
		static int count;
		int Numcompte;  //unique et not null
	protected:
		string devise;
		Date* createdon;
		double solde;
	public:
		Compte(double, string, Date*);
		void afficherCompte() const;
		void debiter(double);
		void crediter(double);
		~Compte();
	};
}
