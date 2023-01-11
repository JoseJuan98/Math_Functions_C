//============================================================================
// Name        : Binomy.cpp
// Author      : josejuan98
// Version     :
// Copyright   : Your copyright notice
// Description : Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorial (int n){ //precondicion = (n,m >= 0)
	int i, fact;
	i = n;  //indice
	fact = 1; //valor inicial del factorial

	while(i > 1){           //bucle,acumulador
		fact = fact*i;
		i = i - 1;
	}
	return fact; //poscondicion = (devuelve el valor factorial de un numero)
}

int binomio (int n, int m){ //parametros del modulo
	int binomio;
	binomio = factorial(n) / ( factorial(m) * factorial(n-m) ); //llamada al modulo del factorial para resolver el binomio

	return binomio;  //poscondicion = (devuelve el resultado del binomio del modulo para darselo al programa principal)
}

int main() {
	int n,m;
	cout << "Introduce the value of n:" << endl;
	cin >> n;
	cout << "Introduce the value of m:" << endl;
	cin >> m;
	cout << "The result is:" << binomio(n,m) << endl;
	return 0;
}
