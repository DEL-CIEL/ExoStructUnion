#include "transbergeur.h"
#include <iostream>

using namespace std;

int main()
{
	Srouleau ro1;
	ro1.numero = 1;
	ro1.longueur = 10.5;

	Spalette pa1;
	pa1.poids = 5;
	strcpy_s(pa1.reference, "Palette 1");

	Eetat etatC1 = vide;
	Ucontenu cont;
	cont.palette = pa1;
	cont.rouleau = ro1;

	Scasier c1;
	c1.casierCont.palette = pa1;
	c1.casierEtat = palette;
	c1.px = 2;
	c1.py = 3;

	Scasier c2;
	c2.casierCont.palette = pa1;
	c2.casierEtat = palette;

	StabCasier tabCasier;
	tabCasier.transbergeur[0] = c1;
	tabCasier.transbergeur[2] = c2;

	cout << sizeof(ro1) << "\n" << sizeof(pa1) << "\n" << sizeof(etatC1) << "\n" << sizeof(cont) << "\n" << sizeof(c1) << "\n" << sizeof(c2) << endl;
}