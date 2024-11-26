#include "rgb.h"
#include <iostream>

using namespace std;

int main()
{
	UColor colorVal;
	cout << "Entrez les couleurs: " << endl;
	cout << "r: 0x";
	cin >> hex >> colorVal.components.r;
	cout << "g: 0x";
	cin >> hex >> colorVal.components.g;
	cout << "b: 0x";
	cin >> hex >> colorVal.components.b;
}