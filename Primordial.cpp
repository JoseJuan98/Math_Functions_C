//============================================================================
// Name        : Primordial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool numprimos(int n){   //modulo que haya si un numero es primo y PRE= n > 0
	int i;               //indice
	bool primo;          //bandera
	primo = true;

	i=2;                         //el valor inicial del indice es 2 porque 1 no se considera primo
	while(primo==true && i < n){ //si un numero no tiene divisores e i<n para cerrar el bucle se le incrementa el valor del indice
		if(n % i == 0){
			primo = false;

		}else{                       //si no hay divisor i se incrementa para seguir comprobando hasta que se acabe el bucle
			i++;
		}

	 }
	return primo;          //n es primo si primo es true

	//POS=devuelve si un numero es primo o no a traves de verdadero o falso respectivamente
}
/*void pruebasnumprimos(){
	cout << "Inicio de pruebas" << endl;
	if(numprimos(2) != true)
		cout << "ERROR en prueba de 2" << endl;
	if(numprimos(3) != true)
			cout << "ERROR en prueba de 3" << endl;
	if(numprimos(4) != false)
			cout << "ERROR en prueba de 4" << endl;
	if(numprimos(13) != true)
			cout << "ERROR en prueba de 13" << endl;
	if(numprimos(19) != true)
		cout << "ERROR en prueba de 19" << endl;
	cout << "Final de pruebas" << endl;

}*/

int primordial(int n){
	int prodprimordial;
	prodprimordial=1;                                  //acumulador


	while(n > 1){                                  //bucle que se cierra cuando n llega a valer 2

		if(numprimos(n) == true){                  //si el n con el nuevo valor es primo se multiplica para acumularse en primordial

				prodprimordial = prodprimordial*n;
		}
		n= n-1;
	}
	return prodprimordial;
}
/*void pruebasprimordial(){
	cout << "Inicio de pruebas" << endl;
	if(primordial(2) != 2)
		cout << "ERROR" << endl;
	if(primordial(3) != 6)
			cout << "ERROR" << endl;
	if(primordial(7) != 210)
			cout << "ERROR" << endl;
	if(primordial(12) != 2310)
			cout << "ERROR" << endl;
}*/



int main() {
	int n;
	//pruebasnumprimos();
	//pruebasprimordial();


	cout << "Introduce el valor de n:" << endl;
	cin >> n;
	if(n == 1)
		cout << "1 no es primo." <<  endl;
	if(n == 0)
		cout << "No se puede calcular el primordial de 0.";
	else
		cout << "El primordiral de n es: " << primordial(n) << endl;
	return 0;
}
