#include <iostream>
#include "Etudiant.h"

using namespace std;

Etudiant::Etudiant()
{
	m_nomEtudiant = "Eleve";
	m_noteSur20 = 20;
	m_noteSur10 = 10;
}

Etudiant::Etudiant(string nom, int nSur20, int nSur10)
{
	m_nomEtudiant = nom;
	this->m_noteSur20 = nSur20;
	this->m_noteSur10 = nSur10;
}

string Etudiant::getNomEtudiant()
{
	return m_nomEtudiant;
}

void Etudiant::setNomEtudiant()
{

}

int Etudiant::getNoteSur20()
{
	return m_noteSur20;
}

void Etudiant::setNoteSur20()
{
	
}

int Etudiant::getNoteSur10()
{
	return m_noteSur10;
}

void Etudiant::setNoteSur10()
{

}

float Etudiant::calculerMoyenne()
{
	return 10.00;
}



