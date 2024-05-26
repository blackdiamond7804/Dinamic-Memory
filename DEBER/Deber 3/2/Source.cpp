#include <iostream> 

class Pila {
private:
    int* arreglo; // Arreglo dinámico para almacenar los elementos de la pila
    int tope; // Índice del elemento superior
    int capacidad; // Capacidad máxima de la pila

public:
    // Constructor para inicializar la pila con un tamaño dado
    Pila(int tamano) {
        capacidad = tamano;
        arreglo = new int[capacidad]; // Asignar memoria para la pila
        tope = -1; // Inicializar el tope como -1 para indicar una pila vacía
    }

    // Destructor para liberar la memoria cuando se destruye el objeto
    ~Pila() {
        delete[] arreglo; // Liberar la memoria asignada dinámicamente para la pila
    }

    // Función para agregar un elemento a la pila
    void push(int valor) {
        if (tope == capacidad - 1) { // Verificar si hay desbordamiento de la pila
            std::cout << "Desbordamiento de la pila. No se puede agregar el elemento: " << valor << std::endl;
            return;
        }
        arreglo[++tope] = valor; // Incrementar el tope y agregar el elemento a la pila
        std::cout << "Elemento agregado: " << valor << std::endl; // Mostrar el elemento agregado
    }

    // Función para quitar un elemento de la pila
    void pop() {
        if (tope == -1) { // Verificar si hay subdesbordamiento de la pila
            std::cout << "Subdesbordamiento de la pila. No se puede quitar de una pila vacía." << std::endl;
            return;
        }
        int valor = arreglo[tope--]; // Obtener el elemento superior y decrementar el tope
        std::cout << "Elemento quitado: " << valor << std::endl; // Mostrar el elemento quitado
    }
};

int main() {
    int tamano = 5; // Tamaño de la pila
    std::cout << "Tamaño de la pila: " << tamano << "\n" << std::endl; // Mostrar el tamaño de la pila
    Pila pila(tamano); // Crear una instancia de la clase Pila con el tamaño especificado

    // Agregar elementos a la pila
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);

    // Quitar elementos de la pila
    std::cout << "\nSe quitaron 6 elementos de la pila anterior:" << std::endl;
    pila.pop();
    pila.pop();
    pila.pop();
    pila.pop();
    pila.pop();
    pila.pop(); // Intento de quitar de una pila vacía

    return 0; 
}
