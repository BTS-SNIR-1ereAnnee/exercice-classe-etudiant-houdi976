#include <iostream>
using namespace std;



class Etudiant
{


public:

	Etudiant();
	Etudiant(string nomEtudiant, int noteSur20, int noteSur10);
	string getNomEtudiant();
	void setNomEtudiant();
	int getNoteSur20();
	void setNoteSur20();
	int getNoteSur10();
	void setNoteSur10();
	float calculerMoyenne();

private:
	string m_nomEtudiant;
	int m_noteSur20;
	int m_noteSur10;
};
