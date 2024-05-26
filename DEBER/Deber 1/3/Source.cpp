#include <iostream>  // Including the Input/Output Stream Library
#include <string>    // Including the String Library

int main() {
    // Asignar dinámicamente un arreglo de enteros
    int size = 7; // tamaño del arreglo
    int* dynamicIntArray = new int[size]; // Asignación de memoria para una matriz de enteros de elementos de 'size'

    // inicializar los elementos del arreglo de enteros
    for (int i = 0; i < size; i++) {
        dynamicIntArray[i] = i + 1; //  Establecer valores en la matriz de enteros asignada dinámicamente
    }

    // Asignación dinámica de una matriz de cadenas
    std::string* dynamicStringArray = new std::string[size]; //  Asignación de memoria para una matriz de cadenas de elementos 'size'

    // Inicializa los elementos del arreglo string
    for (int i = 0; i < size; i++) {
        dynamicStringArray[i] = "Element-" + std::to_string(i + 1); // Configuración de valores en la matriz de cadenas asignada dinámicamente
    }

    // Mostrar los elementos de la matriz de enteros asignada dinámicamente
    std::cout << "Dynamically allocated integer array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << dynamicIntArray[i] << " "; // Salida de cada elemento de la matriz de enteros asignada dinámicamente
    }
    std::cout << std::endl;

    // Display the elements of the dynamically allocated string array
    std::cout << "\nDynamically allocated string array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << dynamicStringArray[i] << std::endl; // Outputting each element of the dynamically allocated string array
    }

    // Mostrar los elementos de la matriz de cadenas asignada dinámicamente
    delete[] dynamicIntArray; // Desasignación de memoria para la matriz de enteros asignada dinámicamente
    delete[] dynamicStringArray; // Desasignación de memoria para la matriz de cadenas asignada dinámicamente

    return 0; 
}