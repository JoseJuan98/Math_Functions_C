//============================================================================
// Name        : SucesionFibonacci.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

const int MAX=100;

typedef long long int TipoDato;   //tipo de datos de los elementos del vector
typedef TipoDato TipoVector[MAX]; // predefine un tipo de vector con elementos del tipo de TipoDato


/*PRE = {a >= 0}
 *POST = inicializa el vector v segun la sucesion fibonacci
 *Complejidad = O(n)
 */
void inicializarSucesion(TipoVector &v , int a, int b){
	int i;                     //indice

	v[0]=0;
	cout << "El termino 0 de la sucesion es: " << v[0] << endl;
	v[1]=a;
	cout << "El termino 1 de la sucesion es: " << v[1] << endl;

	for(i=2; i < b; i++){
		v[i] = v[i-2] + v[i-1];
		cout << "El termino " << i << " de la sucesion es: " << v[i] << endl;
	}
}

/*PRE= { a y b tienen que tener valores correctos
 *POST = devuelve la sucesion Fibonacci de forma recursiva
 *Complejidad= O(n)
 */
long long int sucesionDeTerminoN(int a, int b){
	long long int suma;

	if(a == 0){
		suma = 0;
	}else{
		if(suma == 2){
			suma = a;
		}else{
			suma = sucesionDeTerminoN(a-2, b) + sucesionDeTerminoN(a-1, b);
		}

	}
return suma;
}
void pruebasInicializarSucesion(int a, int b){
	TipoVector u;
	int i;

	cout << "Inicio ed pruebas" << endl;

    inicializarSucesion(u, a, b);

    for(i=0; i < b; i++){
    	if(u[i] != sucesionDeTerminoN(i+1, a)){
    		cout << "Error en pruebas de sucesionDeTerminoN" << endl;
    	}
    }

    cout << "Fin de pruebas" << endl;
}
int main() {
	TipoVector v;
	int a, b;


	cout << "En que numero de parejas empieza la sucesion: " << endl;
	cin >> a;
	cout << "Que numero de veces quieres que se haga la sucesion: " << endl;
	cin >> b;

	inicializarSucesion(v, a, b);

	pruebasInicializarSucesion(4, 30);
	pruebasInicializarSucesion(3, 30);
	pruebasInicializarSucesion(5, 30);
	pruebasInicializarSucesion(7, 30);

	cout << sucesionDeTerminoN(a,b) << endl;
	return 0;
}
