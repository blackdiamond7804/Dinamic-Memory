#include <iostream>  
#include <string>    

int main() {
	// Asignación dinámica de memoria para un carácter
	char* dynamicChar = new char;  // Asignando memoria para almacenar un solo carácter

	// Ingresar un carácter desde el usuario
	std::cout << "Ingresa un carácter: ";
	std::cin >> *dynamicChar;  // Tomando una entrada de un solo carácter y almacenándola en la memoria asignada dinámicamente

	// Asignación dinámica de memoria para una cadena
	std::string* dynamicString = new std::string;  // Asignando memoria para almacenar una cadena

	// Ingresar una cadena desde el usuario
	std::cout << "Ingresa una cadena: ";
	std::cin.ignore();  // Ignorando el carácter de nueva línea de la entrada anterior
	std::getline(std::cin, *dynamicString);  // Tomando una entrada de cadena y almacenándola en la memoria asignada dinámicamente para la cadena

	// Mostrar el carácter y la cadena ingresados
	std::cout << "Carácter ingresado: " << *dynamicChar << std::endl;  // Mostrando el carácter ingresado
	std::cout << "Cadena ingresada: " << *dynamicString << std::endl;  // Mostrando la cadena ingresada

	// Liberar la memoria asignada dinámicamente
	delete dynamicChar;  // Liberando la memoria asignada para el carácter
	delete dynamicString;  // Liberando la memoria asignada para la cadena

	return 0;  
}
