#pragma once

struct Spalette
{
	int poids;
	char reference[19];
};

struct Srouleau
{
	int numero;
	float longueur;
};

union Ucontenu
{
	Spalette palette;
	Srouleau rouleau;
};

enum Eetat
{
	vide, palette, rouleau
};

struct Scasier
{
	int px, py;
	Ucontenu casierCont;
	Eetat casierEtat;
};

struct StabCasier
{
	Scasier transbergeur[9];
};