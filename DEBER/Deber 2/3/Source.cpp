#include <iostream>  // Incluyendo la biblioteca de flujo de entrada/salida

class MyClass {  // Declaración de una clase llamada MyClass
public:
    void displayMessage() {  // Función miembro pública dentro de la clase MyClass
        std::cout << "¡Objeto dinámico!" << std::endl;  // Mostrando un mensaje
    }
};

int main() {
    // Obtener el tamaño del arreglo desde el usuario
    int size;  // Declarando una variable para almacenar el tamaño del arreglo
    std::cout << "Ingresa el tamaño del arreglo: ";  // Solicitando al usuario que ingrese el tamaño del arreglo
    std::cin >> size;  // Leyendo el tamaño del arreglo ingresado por el usuario

    // Crear un arreglo dinámico de objetos MyClass
    MyClass* dynamicArray = new MyClass[size];  // Asignando dinámicamente memoria para un arreglo de objetos MyClass de 'size'

    // Acceder y utilizar los objetos en el arreglo dinámico
    for (int i = 0; i < size; i++) {  // Recorriendo cada elemento del arreglo dinámico
        dynamicArray[i].displayMessage();  // Accediendo e invocando la función displayMessage para cada objeto MyClass
    }

    // Liberar el arreglo dinámico
    delete[] dynamicArray;  // Liberando la memoria ocupada por el arreglo dinámico

    return 0;  // Devolviendo 0 para indicar la ejecución exitosa del programa
}
