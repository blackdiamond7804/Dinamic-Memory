#include <iostream> 

// Definición de una estructura llamada Nodo para una lista enlazada
struct Nodo {
    int dato; // Datos almacenados en el nodo
    Nodo* siguiente; // Puntero al siguiente nodo
};

// Función para mostrar la lista enlazada
void mostrarLista(Nodo* cabeza) {
    Nodo* actual = cabeza; // Inicializar un puntero 'actual' para recorrer la lista
    while (actual != nullptr) { // Recorrer la lista hasta el final
        std::cout << actual->dato << " "; // Mostrar los datos en el nodo actual
        actual = actual->siguiente; // Moverse al siguiente nodo
    }
    std::cout << std::endl; // Mostrar una nueva línea después de imprimir la lista
}

// Función para insertar un nodo al principio de la lista enlazada
void insertarAlPrincipio(Nodo*& cabeza, int valor) {
    Nodo* nuevoNodo = new Nodo; // Crear un nuevo nodo
    nuevoNodo->dato = valor; // Establecer los datos del nuevo nodo
    nuevoNodo->siguiente = cabeza; // Apuntar el nuevo nodo al nodo actual
    cabeza = nuevoNodo; // Actualizar la cabeza al nuevo nodo
}

// Función para eliminar un nodo de la lista enlazada
void eliminarNodo(Nodo*& cabeza, int valor) {
    if (cabeza == nullptr) {
        return; // Lista vacía, no hay nada que eliminar
    }
    if (cabeza->dato == valor) {
        Nodo* temp = cabeza; // Almacenar la cabeza actual en un nodo temporal
        cabeza = cabeza->siguiente; // Mover la cabeza al siguiente nodo
        delete temp; // Eliminar el nodo original de la cabeza
        return;
    }
    Nodo* actual = cabeza; // Inicializar un puntero 'actual' para recorrer la lista
    while (actual->siguiente != nullptr) { // Recorrer hasta el final de la lista
        if (actual->siguiente->dato == valor) { // Verificar si el siguiente nodo tiene el valor a eliminar
            Nodo* temp = actual->siguiente; // Almacenar el siguiente nodo en un nodo temporal
            actual->siguiente = temp->siguiente; // Actualizar los punteros para saltar el nodo a eliminar
            delete temp; // Eliminar el nodo con el valor
            return;
        }
        actual = actual->siguiente; // Moverse al siguiente nodo
    }
}

// Función para liberar la memoria de la lista enlazada
void eliminarLista(Nodo*& cabeza) {
    Nodo* actual = cabeza; // Inicializar un puntero 'actual' para recorrer la lista
    while (actual != nullptr) { // Bucle hasta el final de la lista
        Nodo* temp = actual; // Almacenar el nodo actual en un nodo temporal
        actual = actual->siguiente; // Moverse al siguiente nodo
        delete temp; // Eliminar el nodo almacenado
    }
    cabeza = nullptr; // Establecer la cabeza en nulo después de eliminar todos los nodos
}

int main() {
    Nodo* cabeza = nullptr; // Inicializar una lista enlazada vacía

    // Insertar nodos al principio
    insertarAlPrincipio(cabeza, 1);
    insertarAlPrincipio(cabeza, 3);
    insertarAlPrincipio(cabeza, 5);
    insertarAlPrincipio(cabeza, 7);
    insertarAlPrincipio(cabeza, 9);

    // Mostrar la lista enlazada inicial
    std::cout << "Lista inicial: ";
    mostrarLista(cabeza);

    // Eliminar un nodo de la lista enlazada
    std::cout << "Eliminar el nodo con valor 3: ";
    eliminarNodo(cabeza, 3);
    // Mostrar la lista enlazada actualizada
    std::cout << "\nLista actualizada: ";
    mostrarLista(cabeza);

    // Liberar la memoria de la lista enlazada
    eliminarLista(cabeza);

    return 0; 
}
