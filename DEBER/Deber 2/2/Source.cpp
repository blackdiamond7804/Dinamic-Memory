#include <iostream>  

class MyClass {  // Declaración de una clase llamada MyClass
public:
    void displayMessage() {  // Función miembro pública dentro de la clase MyClass
        std::cout << "¡Objeto dinámico!" << std::endl;  // Mostrando un mensaje
    }
};

int main() {
    // Crear un objeto dinámico de MyClass
    MyClass* dynamicObject = new MyClass;  // Asignando dinámicamente memoria para un objeto de tipo MyClass

    // Llamar a la función miembro del objeto dinámico
    dynamicObject->displayMessage();  // Accediendo a la función miembro del objeto creado dinámicamente mediante el puntero al objeto

    // Liberar el objeto dinámico
    delete dynamicObject;  // Liberando la memoria ocupada por el objeto dinámico

    return 0;  
}
