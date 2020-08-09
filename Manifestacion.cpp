//============================================================================
// Name        : Manifestacion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int b1, b2, h;
	float denpers, numpers, a;

	cout << "Introduzca la longitud de la base menor en m:" << endl;
	cin >> b2;
	cout << "Introduzca la longitud de la base mayor en m:" << endl;
	cin >> b1;
	cout << "Introduzca la longitud de la altura en m:" << endl;
	cin >> h;

	a = ((b1+b2)/2.0)*h;

	cout << "Introduce el numero de personas por m2:" << endl;
	cin >> denpers;

	numpers = denpers*a;

	cout << "Se estima la participacion de personas en:  " << numpers << "  personas." << endl;


	return 0;
}
