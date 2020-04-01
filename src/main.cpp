#include <iostream>
#include "Etudiant.h"
using namespace std;


int main()
{
	//Déclaration des variables
	string nom;
	int note1, note2;

	//saisis des donnée par l'*utilisateur
	cout <<"entrer un nom" << endl;
	cin >> nom;
	cout << "entrer une note sur 10"<<endl;
	cin>>note1;
	cout<<"entrer une note sur20"<<endl;
	cin>>note2;

	Etudiant eleve(nom,note2,note1);//Création objet
	
	//Affichage
	cout << "\n\nNom de l'etudiant : \n" << eleve.getNomEtudiant() << endl;
	cout << "Note sur 20 : \n" << eleve.getNoteSur20() << endl;
	cout << "Note sur 10 : \n" << eleve.getNoteSur10() << endl;
	cout << eleve.getNomEtudiant() <<" : " << eleve.getNoteSur20()<<"/20,"<< eleve.getNoteSur10()<<"/10"<<endl;
	cout <<"moyenne: " <<eleve.calculerMoyenne(note1,note2)<<endl;

	return 0;
}


