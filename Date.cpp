#include "Date.h"
Date::Date()
{
	this->jour = 1;
	this->mois = 1;
	this->annee = 2000;
}

Date::Date(int j, int m, int a) :jour(j), mois(m), annee(a)
{
}

void Date::afficherDateNais() const
{
	cout << this->jour << "/" << this->mois << "/" << this->annee << endl;
}