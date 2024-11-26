#include <iostream>

using namespace std;

struct casier
{
	int px, py;
	contenu casierCont;
};

union contenu
{
	bool por; // 0 : palette | 1 : rouleau
};

enum etat
{
	vide, palette, rouleau
};

struct palette
{
	int poids;
	char* reference[19];
};

struct rouleau
{
	int numero;
	float longueur;
};

struct tabCasier
{
	casier transbergeur[9];
};

int main()
{
	
}