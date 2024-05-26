#include <iostream>  
#include <string>    

int main() {
	// Asignaci�n din�mica de memoria para un car�cter
	char* dynamicChar = new char;  // Asignando memoria para almacenar un solo car�cter

	// Ingresar un car�cter desde el usuario
	std::cout << "Ingresa un car�cter: ";
	std::cin >> *dynamicChar;  // Tomando una entrada de un solo car�cter y almacen�ndola en la memoria asignada din�micamente

	// Asignaci�n din�mica de memoria para una cadena
	std::string* dynamicString = new std::string;  // Asignando memoria para almacenar una cadena

	// Ingresar una cadena desde el usuario
	std::cout << "Ingresa una cadena: ";
	std::cin.ignore();  // Ignorando el car�cter de nueva l�nea de la entrada anterior
	std::getline(std::cin, *dynamicString);  // Tomando una entrada de cadena y almacen�ndola en la memoria asignada din�micamente para la cadena

	// Mostrar el car�cter y la cadena ingresados
	std::cout << "Car�cter ingresado: " << *dynamicChar << std::endl;  // Mostrando el car�cter ingresado
	std::cout << "Cadena ingresada: " << *dynamicString << std::endl;  // Mostrando la cadena ingresada

	// Liberar la memoria asignada din�micamente
	delete dynamicChar;  // Liberando la memoria asignada para el car�cter
	delete dynamicString;  // Liberando la memoria asignada para la cadena

	return 0;  
}
