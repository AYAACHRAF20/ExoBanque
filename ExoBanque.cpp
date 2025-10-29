// ExoBanque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include"Date.h"
#include"Compte.h"
#include"C_Epargne.h"
#include"C_courant.h"
using namespace Bank;
int main()
{
	Date* d1 = new Date(22, 10, 2024);
	Date* d2 = new Date(15, 5, 2022);

    C_Epargne* compteEpargne = new C_Epargne(1000, "DH", d1, 3); 
    C_courant* compteCourant = new C_courant(500, "Euro", d2, 1000); 

    compteEpargne->afficherCompte();
    compteCourant->afficherCompte();

    compteEpargne->debiter(400);
    compteEpargne->afficherCompte();

    compteCourant->debiter(1200); 
    compteCourant->afficherCompte();

    compteCourant->crediter(200);
    compteCourant->afficherCompte();

    delete d1;
    delete d2;
    delete compteEpargne;
    delete compteCourant;
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
