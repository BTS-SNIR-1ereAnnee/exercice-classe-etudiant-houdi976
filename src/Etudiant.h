#include <iostream>
using namespace std;



class Etudiant
{


public:

	Etudiant();//Constructeur par défaut
	Etudiant(string nomEtudiant, int noteSur20, int noteSur10);//Constructeur avec paramètres
	
	//Méthodes
	string getNomEtudiant();//Renvoie la valeur de NomEtudiant
	void setNomEtudiant(string nom);//Met la valeur à NomEtudiant
	int getNoteSur20();//Renvoie la valeur de NoteSur20
	void setNoteSur20(int noteSur20);//Met la valeur à NoteSur20
	int getNoteSur10();//Renvoie la valeur de NoteSur10
	void setNoteSur10(int noteSur10);//Met la valeur à NoteSur10
	float calculerMoyenne(int noteSur20, int noteSur10);//Calcul de la moyenne des notes


private:
	string m_nomEtudiant;
	int m_noteSur20;
	int m_noteSur10;
};
