#include <iostream>  

class MyClass {  // Declaraci�n de una clase llamada MyClass
public:
    void displayMessage() {  // Funci�n miembro p�blica dentro de la clase MyClass
        std::cout << "�Objeto din�mico!" << std::endl;  // Mostrando un mensaje
    }
};

int main() {
    // Crear un objeto din�mico de MyClass
    MyClass* dynamicObject = new MyClass;  // Asignando din�micamente memoria para un objeto de tipo MyClass

    // Llamar a la funci�n miembro del objeto din�mico
    dynamicObject->displayMessage();  // Accediendo a la funci�n miembro del objeto creado din�micamente mediante el puntero al objeto

    // Liberar el objeto din�mico
    delete dynamicObject;  // Liberando la memoria ocupada por el objeto din�mico

    return 0;  
}
