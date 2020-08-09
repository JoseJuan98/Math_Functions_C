/**


	INTRODUCCIÓN A LA PROGRAMACIÓN / FUNDAMENTOS DE PROGRAMACIÓN
	Curso 2016/2017

	Nombre: vectorEnteros.cpp
	Descripción: Especificación  e implementación del TAD Vector para el proyecto sesion07.

	Autor:	Profesores de las asignaturas IP/FP
	Fecha:	26/10/2016
*/

#include <iostream>
#include <cstdlib>


using namespace std;

const int MAX = 15; //esta constante almacenará el tamaño del vector (número de celdas)

typedef int TipoDato;  //TipoDato es el nombre que le damos (de forma genérica) al tipo de los elementos del vector
typedef TipoDato TipoVector[MAX];

/*
  * PRE: {}
  * POST:{Todas la celdas de V se inicializan con valores aleatorios entre
  *      0 y MAX-1}
  * Complejidad: O(n)
*/
void inicializar(TipoVector &v) {
	// Rellena las celdas con valores aleatorios entre 0 y MAX-1
	int i; // rol: índice; toma valores de 0 a MAX-1
	srand(time(NULL)); //inicialización del generador de números aleatorios
	for (i = 0; i < MAX; i++) {
		v[i] = rand() % MAX; //
		}
}

/**
 * PRE: {V ha sido creado e inicializado con valores correctos. W tiene un valor indefinido}
 * POST: {W se modifica de modo que tiene los mismos valores que V}
 * Complejidad: O(n)
*/
void copiar(TipoVector v, TipoVector &w) {
	int i;
	for (i = 0; i < MAX; i++) {
		w[i] = v[i];
	}
}

/**
 * PRE: {v ha sido creado e inicializado con valores correctos}
 * POST: {}
 * Complejidad: O(n)
*/
void mostrar(TipoVector v){
	int i; // rol: índice; toma valores de 0 a MAX-1

	for (i = 0; i < MAX; i++) {
			cout << "[ "<<v[i]<<" ]";
	}
	cout <<endl;
}
void media(TipoVector v){
	int i, suma;
	suma=0;

	for(i=0; i < MAX; i++){
		suma = suma + (v[i]/15);
	}
}
/*PRE= v debe haber sido inicializado correctamente
 *POST=devuelve la media de los elementos de v
 *Complejidad: O(n)
 */
void numVeces (TipoVector v){
	int i, veces, n;
	veces=0;

	cout << "Que valor quieres saber cuantas veces se repite: " << endl;
	cin >> n;

	for(i=0; i < MAX; i++){
		if(v[i] == n){
					veces = veces + 1;
				}
	}
}
/*PRE= debe haber sido inicializado v y debe haberse establecido el valor determinado
 * POST=devuelve cuantas veces n equivale a los valores de los elementos de v
 * Complejidad: O(n)
 */
void sumaVectores(TipoVector v, TipoVector u){
	TipoVector z;
	int i;

	for(i=0; i < MAX; i++){
		z[i] = v[i] + u[i];
	}

}
/*PRE= deben haber sido inicializados v y u
 * POST=devuelve un tercer vector z con la suma de cada elemento de v y u
 * Complejidad: 0(n)
 */



int main() {

	TipoVector v1, vCopia, u;

	inicializar(v1);        //se inicializan las celdas de V1 con valores aleatorios
	mostrar    (v1);        //mostramos los valores de V1
	copiar     (v1, vCopia);//copiamos los valores de V1 en VCopia
	mostrar    (vCopia);    //mostramos los valores de VCopia

	media(v1);              //devuelve la media de los elementos
	numVeces(v1);           //devuelve el numero de veces que uno de sus elementos equivale a un
	                        //a un valor determinado
	inicializar(u);         //inicializo un vector nuevo para poderle sumarle a v1
	sumaVectores(v1,u);     //suma elemento a elemento los vectores v1 y u dando valores a los
	                        //de z, el nuevo vector resultado de la suma de estos
	return 0;
}
