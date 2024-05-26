#include <iostream>  // Including the Input/Output Stream Library
#include <string>    // Including the String Library

int main() {
    // Asignar din�micamente un arreglo de enteros
    int size = 7; // tama�o del arreglo
    int* dynamicIntArray = new int[size]; // Asignaci�n de memoria para una matriz de enteros de elementos de 'size'

    // inicializar los elementos del arreglo de enteros
    for (int i = 0; i < size; i++) {
        dynamicIntArray[i] = i + 1; //  Establecer valores en la matriz de enteros asignada din�micamente
    }

    // Asignaci�n din�mica de una matriz de cadenas
    std::string* dynamicStringArray = new std::string[size]; //  Asignaci�n de memoria para una matriz de cadenas de elementos 'size'

    // Inicializa los elementos del arreglo string
    for (int i = 0; i < size; i++) {
        dynamicStringArray[i] = "Element-" + std::to_string(i + 1); // Configuraci�n de valores en la matriz de cadenas asignada din�micamente
    }

    // Mostrar los elementos de la matriz de enteros asignada din�micamente
    std::cout << "Dynamically allocated integer array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << dynamicIntArray[i] << " "; // Salida de cada elemento de la matriz de enteros asignada din�micamente
    }
    std::cout << std::endl;

    // Display the elements of the dynamically allocated string array
    std::cout << "\nDynamically allocated string array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << dynamicStringArray[i] << std::endl; // Outputting each element of the dynamically allocated string array
    }

    // Mostrar los elementos de la matriz de cadenas asignada din�micamente
    delete[] dynamicIntArray; // Desasignaci�n de memoria para la matriz de enteros asignada din�micamente
    delete[] dynamicStringArray; // Desasignaci�n de memoria para la matriz de cadenas asignada din�micamente

    return 0; 
}