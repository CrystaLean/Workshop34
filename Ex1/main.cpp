#include "pch.h"

using namespace std;

int main() {
	cout << "Voulez vous un rectangle (1) ou carre (2) ?";
	int choix;
	cin >> choix;

	cout << "" << endl;

	if (choix == 1) {
		cout << "Quelle est la longueur du rectangle ?";
		int longueur;
		cin >> longueur;

		cout << "" << endl;

		cout << "Quel est la largeur du rectangle ?";
		int largeur;
		cin >> largeur;

		cout << "" << endl;

		Rectangle Rectangle1(longueur, largeur);

		cout << "Le perimetre du rectangle est de : " << Rectangle1.getPerimetre() << endl;
		cout << "L'aire du rectangle est de : " << Rectangle1.getAire() << endl;

		cout << "" << endl;

		cout << "Voulez-vous voir les informations ? (o/n)";
		char voirInfo;
		cin >> voirInfo;

		cout << "" << endl;

		if (voirInfo == 'o' || voirInfo == 'O') {
			cout << Rectangle1.afficheInfo() << endl;
		}
	}
	else if (choix == 2) {
		cout << "Quelle est la longueur d'un cote du carre ?";
		int cote;
		cin >> cote;

		cout << "" << endl;

		Carre Carre1(cote);

		cout << "Le perimetre du carre est de : " << Carre1.getPerimetre() << endl;
		cout << "L'aire du carre est de : " << Carre1.getAire() << endl;

		cout << "" << endl;

		cout << "Voulez-vous voir les informations ? (o/n)";
		char voirInfo;
		cin >> voirInfo;

		cout << "" << endl;


		if (voirInfo == 'o' || voirInfo == 'O') {
			cout << Carre1.afficheInfo() << endl;
		}
	}

	else {
		cout << "Vous avez choisi une option inexistante" << endl;
	}

	cout << "" << endl;

	cout << "Exemple de Stockage" << endl;

	cout << "" << endl;

	Stockage stockage;

	Rectangle* rectangle2 = new Rectangle(10, 5);
	Carre* carre1 = new Carre(8);
	Rectangle* rectangle3 = new Rectangle(7, 3);

	stockage.ajouterEnTete(rectangle2);
	stockage.ajouterAIndex(carre1, 1);
	stockage.ajouterEnQueue(rectangle3);

	cout << "---- Informations apres ajout ----" << endl;

	cout << "" << endl;

	stockage.afficherInfos();

	stockage.supprimerEnTete();
	stockage.supprimerAIndex(1);

	cout << "\n---- Apres suppression de deux objets ----" << endl;

	cout << "" << endl;

	stockage.afficherInfos();

	stockage.supprimerEnTete();
	stockage.supprimerEnQueue();

	cout << "\n---- Apres suppression de tous les objets ----" << endl;

	cout << "" << endl;

	stockage.afficherInfos();

	return 0;
}