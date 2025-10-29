#pragma once
using namespace std;
#include<iostream>
class Date
{
private:
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int, int, int);
	void afficherDateNais() const;
};
