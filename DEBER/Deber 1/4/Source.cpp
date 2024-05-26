#include <iostream>  
#include <string>    

int main() {
    //Dimension de los arreglos
    int rows = 3;  // Numero de filas en el arreglo
    int columns = 4;  // Numerode columnas en el arreglo

    // Asignación dinámica de una matriz bidimensional de valores flotantes
    float** dynamicFloatArray = new float* [rows];  // Asignación de memoria para la matriz de punteros flotantes (filas)
    for (int i = 0; i < rows; i++) {
        dynamicFloatArray[i] = new float[columns];  // Asignación de memoria para cada fila (matriz de flotantes)
    }

    // Inicializa los elementos del arreglo flotante
    float value = 1.2;  // Valor incial del arreglo
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            dynamicFloatArray[i][j] = value;  // Asigna valores a cada elemento del arreglo flotante
            value += 1.0;  // Incrementa el valor del siguiente elemento
        }
    }

    // Asignación dinámica de una matriz bidimensional de cadenas
    std::string** dynamicStringArray = new std::string * [rows];  // Asignación de memoria para la matriz de punteros de cadena (filas)
    for (int i = 0; i < rows; i++) {
        dynamicStringArray[i] = new std::string[columns];  // Asignación de memoria para cada fila (matriz de cadenas)
    }

    // Inicializa los elementos del arreglo string
    std::string element = "M";  // inicia el elemento string
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            dynamicStringArray[i][j] = element;  // Asigna valores a cada elemento del arreglo string
            element[0] += 1;  // Modifica el elemento string para el sgt elemento
        }
    }

    // Mostrar los elementos de la matriz float
    std::cout << "Matriz flotante asignada dinámicamente:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << dynamicFloatArray[i][j] << " ";  // Outputting each element of the dynamically allocated float array
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Mostrar elementos del areglo string
    std::cout << "Matriz de cadenas asignada dinámicamente:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << dynamicStringArray[i][j] << " ";  // Salida de cada elemento de la matriz de cadenas asignada dinámicamente
        }
        std::cout << std::endl;
    }

    // Desasignar la memoria asignada para ambas matrices
    for (int i = 0; i < rows; i++) {
        delete[] dynamicFloatArray[i];
        delete[] dynamicStringArray[i];
    }
    delete[] dynamicFloatArray;
    delete[] dynamicStringArray;

    return 0;  
}