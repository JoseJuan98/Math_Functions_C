//============================================================================
// Name        : GuessOneNumber.cpp
// Author      : Jose Juan Pena Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int adivinanum(int n){
	int numero;
	if(numero == n){
			cout << "You have guessed the number." << endl;
		}

	cout << "Try to guess one number, between 1 and 100: " << endl;
	cin >> numero;
	int cont=1;

	while(numero != n && cont<=10){
		cont++;

		if(n > numero){
			cout << "The number that you are trying to guess is greater than:  " << numero << endl;
			cin >> numero;
		}else{
			cout << "The number that you are trying to guess is less than:  " << numero << endl;
			cin >> numero;
		}

	}return numero;

}



int main() {
	int n, respuesta;
	respuesta = 1;

	srand(time(NULL));
	while(1 == respuesta){
		n = 1 + rand() % 100;
		respuesta = adivinanum(n);
	}

	cout << adivinanum(n) << endl;
	return 0;
}
