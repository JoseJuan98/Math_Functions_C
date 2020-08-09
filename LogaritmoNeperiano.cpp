//============================================================================
// Name        : LogNeperiano.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;


long double logneperiano(float z, int m){     //PRE= z,m > 0
	int i, k;
	long double  suma;
	i=0;
	suma=0;
	k=0;
	while(i <= m){

		suma = suma + 2*(1.0/(2*i+1))*pow(((z-1.0)/(z+1.0)),(2*i+1));
		i++;
		if(k <= m){
			cout << "E" << k << " es igual a " << suma << endl;
			k++;

		}


	}
	return suma;                 //POST= devuelve el valor del logaritmo neperiano aproximado segun el parametro m.

}
/*DISEÑO DE PRUEBAS
 * N   M         Resultado
 * 2   5         0.6931
 * 6   5         1.79176
 * 60  5         4.0943
 * 3   5         1.0986
 * 15  5         2.708
 */

void pruebaslognep(){
	const float ERROR=1;

	cout << "Inicio de pruebas. " << endl;

	if((logneperiano(2.0, 5) - 0.6931) > ERROR)
		cout << "Error en la prueba n = 2" << endl;

	if((logneperiano(6.0, 5) - 1.79176) > ERROR)
			cout << "Error en la prueba n = 6" << endl;

	if((logneperiano(60.0, 5) - 4.0943) > ERROR)
			cout << "Error en la prueba n = 60" << endl;

	if((logneperiano(3.0, 5) - 1.0986) > ERROR)
			cout << "Error en la prueba n = " << endl;

	if((logneperiano(15.0, 5) - 2.708) > ERROR)
			cout << "Error en la prueba n = 15" << endl;

	cout << "Fin de pruebas" << endl;
}

int main() {
	float z;
	int m;
	pruebaslognep();

	cout << "Introduce valor de z: " << endl;
	cin >> z;
	cout << "Introduce valor de m: " << endl;
	cin >> m;
	cout << "El logaritmo vale: " << logneperiano(z,m) << endl;

	return 0;
}
