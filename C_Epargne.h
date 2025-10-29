#pragma once
#include "Compte.h"
namespace Bank {
	class C_Epargne : public Compte
	{
	private: 
		double tauxInteret;
	public:
		C_Epargne(double, string, Date*, double);
		void debiter(double);
		void afficherCompte() const;
		~C_Epargne();
	};
}

