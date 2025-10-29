#pragma once
#include "Compte.h"
namespace Bank {
	class C_courant : public Compte
	{
	private:
		double plafond;
	public:
		C_courant(double, string, Date*, double);
		void debiter(double);
		void afficherCompte() const;
		~C_courant();
	};
}
