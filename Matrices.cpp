//============================================================================
// Name        : Matrices.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

const int MAX = 6;

typedef int TipoMatriz[MAX][MAX];

struct TipoZona{
	int ancho;
	int alto;
};

void iniciarMatriz(TipoMatriz &M){
	int i, j;   //indices

	for(i=0; i < MAX; i++){
		for(j=0; j < MAX; j++){
			M[i][j] = 0;
		}
	}
}
bool esPosibleRellenarZona(TipoZona zona, int fila, int columna, TipoMatriz M){
	int i, j;          //indices
	bool rellenar;     //bandera
	rellenar = true;

	for(i= columna; i < MAX; i++){
		for(j= fila; j < MAX; j++){
			if(M[zona.alto][zona.ancho] > M[i][j])
				rellenar = false;
		}
	}
return rellenar;
}
/*PRE = {M debe estar inicializada}
 * POST= devuelve false si la zona no cabe en la matriz y true si si cabe
 * Complejidad= O(n cuadratica)
 */

int main() {
	int fila, columna;
	TipoZona zona;
	TipoMatriz M;

	esPosibleRellenarZona(zona, fila, columna, M);
	if(esPosibleRellenarZona(zona , 0, 0, M) != true)
		cout << "Error" << endl;
	if(esPosibleRellenarZona(zona, 2, 4, M) !=false)
		cout << "Error" << endl;
	if(esPosibleRellenarZona(zona, 4, 4, M) != false)
		cout << "Error" << endl;
	if(esPosibleRellenarZona(zona, 1, 1, M) != true)
		cout << "Error" << endl;



	return 0;
}
