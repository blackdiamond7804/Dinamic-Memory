#include<iostream>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(void) {
	int** matriz, i, j, nfilas, ncolumnas;
	nfilas = 5;
	ncolumnas = 10;

	//Reserva memoria para las filas 
	matriz = new int*[nfilas];

	for (int i = 0; i < nfilas; ++i) {
		//Reserva memoria para las columnas
		matriz[i] = new int[ncolumnas];

		for (int j = 0; j < ncolumnas; ++j) {
			matriz[i][j] = i + j;
		}
	}

	//Imprime la matriz
	for (int i = 0; i < nfilas; ++i) {
		for (int j = 0; j < ncolumnas; ++j) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

	//Libera la memoria
	for (int i = 0; i < nfilas; ++i) {
		delete[] matriz[i];
	}
	delete[] matriz;

	return 0;
}