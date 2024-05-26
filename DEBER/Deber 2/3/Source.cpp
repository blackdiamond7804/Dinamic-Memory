#include <iostream>  // Incluyendo la biblioteca de flujo de entrada/salida

class MyClass {  // Declaraci�n de una clase llamada MyClass
public:
    void displayMessage() {  // Funci�n miembro p�blica dentro de la clase MyClass
        std::cout << "�Objeto din�mico!" << std::endl;  // Mostrando un mensaje
    }
};

int main() {
    // Obtener el tama�o del arreglo desde el usuario
    int size;  // Declarando una variable para almacenar el tama�o del arreglo
    std::cout << "Ingresa el tama�o del arreglo: ";  // Solicitando al usuario que ingrese el tama�o del arreglo
    std::cin >> size;  // Leyendo el tama�o del arreglo ingresado por el usuario

    // Crear un arreglo din�mico de objetos MyClass
    MyClass* dynamicArray = new MyClass[size];  // Asignando din�micamente memoria para un arreglo de objetos MyClass de 'size'

    // Acceder y utilizar los objetos en el arreglo din�mico
    for (int i = 0; i < size; i++) {  // Recorriendo cada elemento del arreglo din�mico
        dynamicArray[i].displayMessage();  // Accediendo e invocando la funci�n displayMessage para cada objeto MyClass
    }

    // Liberar el arreglo din�mico
    delete[] dynamicArray;  // Liberando la memoria ocupada por el arreglo din�mico

    return 0;  // Devolviendo 0 para indicar la ejecuci�n exitosa del programa
}
