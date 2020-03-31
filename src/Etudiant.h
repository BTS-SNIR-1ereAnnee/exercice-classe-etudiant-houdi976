#include <iostream>
using namespace std;



class Etudiant
{


public:
 
	string getEtudiant();
	void setEtudiant();
	int getNoteSur20();
	void setNoteSur20();
	int getnoteSur10();
	void setNoteSur10();
	float calculerMoyenne();

private:
	string etudiant;
	int noteSur20;
	int noteSur10;
};
