#include <iostream> 

class Cola {
private:
    int* nums; // Arreglo dinámico para almacenar los elementos de la cola
    int frente; // Índice del elemento frontal
    int trasero; // Índice del elemento trasero
    int capacidad; // Capacidad máxima de la cola
    int tamano; // Tamaño actual de la cola

public:
    // Constructor para inicializar la cola con un tamaño dado
    Cola(int tamanoCola) {
        capacidad = tamanoCola;
        nums = new int[capacidad]; // Asignar memoria para la cola
        frente = trasero = -1; // Inicializar frente y trasero como -1 para indicar una cola vacía
        tamano = 0; // Inicializar el tamaño como 0
    }

    // Destructor para liberar la memoria cuando se destruye el objeto
    ~Cola() {
        delete[] nums; // Liberar la memoria asignada dinámicamente para la cola
    }

    // Función para encolar un elemento en la cola
    void encolar(int valor) {
        if (tamano == capacidad) { // Verificar si hay desbordamiento de la cola
            std::cout << "Desbordamiento de la cola. No se puede encolar el elemento: " << valor << std::endl;
            return;
        }
        trasero = (trasero + 1) % capacidad; // Actualizar el índice trasero usando lógica de cola circular
        nums[trasero] = valor; // Agregar el elemento a la cola
        tamano++; // Incrementar el tamaño de la cola
        if (frente == -1) {
            frente = trasero; // Si la cola estaba vacía, actualizar el índice frontal
        }
        std::cout << "Elemento encolado: " << valor << std::endl; // Mostrar el elemento encolado
    }

    // Función para desencolar un elemento de la cola
    void desencolar() {
        if (tamano == 0) { // Verificar si hay subdesbordamiento de la cola
            std::cout << "Subdesbordamiento de la cola. No se puede desencolar de una cola vacía." << std::endl;
            return;
        }
        int valor = nums[frente]; // Obtener el elemento frontal
        frente = (frente + 1) % capacidad; // Actualizar el índice frontal usando lógica de cola circular
        tamano--; // Decrementar el tamaño de la cola
        std::cout << "Elemento desencolado: " << valor << std::endl; // Mostrar el elemento desencolado
        if (tamano == 0) {
            frente = trasero = -1; // Si la cola queda vacía, restablecer los índices frontal y trasero
        }
    }
};

int main() {
    int tamanoCola = 5; // Tamaño de la cola
    std::cout << "Tamaño de la cola: " << tamanoCola << std::endl; // Mostrar el tamaño de la cola
    Cola cola(tamanoCola); // Crear una instancia de la clase Cola con el tamaño especificado

    // Encolar elementos en la cola
    cola.encolar(1);
    cola.encolar(2);
    cola.encolar(3);
    cola.encolar(4);
    cola.encolar(5);

    // Desencolar elementos de la cola
    cola.desencolar();
    cola.desencolar();
    cola.desencolar();
    cola.desencolar();
    cola.desencolar();
    cola.desencolar(); // Intento de desencolar de una cola vacía

    return 0; 
}
