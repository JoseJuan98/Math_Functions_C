//============================================================================
// Name        : Hiperfactorial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

long long int potencia(int n){      //PRE= n > 0
	long long int base, exp;


	if(n == 0){
		base = 1;

	}else{

		for(exp = 1; exp <= n; exp++){
			base = potencia(n-1) * exp;

		}
	}
return base;
}
//POST= devuelve la potencia de n elevado a n
long long int hiperfactorial(int n){  //PRE= n > 0
	long long int fact,i;
	fact=1;
	i=1;

	if(n == 0){
		fact = 1;
	}else{
		while(n >= i){

				fact = fact * potencia(n);
				i++;

			}
	}
return fact;
}
//POST= devuelve el hiperfactorial de n



int main() {
	int n;

	cout << "To calculate the hiperfactorial of one number, introduce the value: " << endl;
	cin >> n;
	cout << "vale:" << hiperfactorial(n) << endl;

	return 0;
}

