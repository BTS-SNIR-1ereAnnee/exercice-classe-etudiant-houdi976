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
	this->m_nomEtudiant = nom;
	this->m_noteSur20 = nSur20;
	this->m_noteSur10 = nSur10;
}

string Etudiant::getNomEtudiant()
{
	return m_nomEtudiant;
}

void Etudiant::setNomEtudiant(string nom)
{
	m_nomEtudiant = nom;
}

int Etudiant::getNoteSur20()
{
	return m_noteSur20;
}

void Etudiant::setNoteSur20(int noteSur20)
{
	m_noteSur20 = noteSur20;
}

int Etudiant::getNoteSur10()
{
	return m_noteSur10;
}

void Etudiant::setNoteSur10(int noteSur10)
{
	m_noteSur10 = noteSur10;
}

float Etudiant::calculerMoyenne(int noteSur10, int noteSur20)
{
	float notes;
	float moyenne;
	notes=noteSur10 * 2;
	notes=notes + noteSur20;
	moyenne=notes/2;

	return moyenne;
}



