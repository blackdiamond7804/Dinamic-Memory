#include <iostream> 
#include<string>

using namespace std;

// Definiendo una estructura llamada MyStruct
struct MyStruct {
	int id;           // Variable miembro de tipo entero 'id'
	string name; // Variable miembro de tipo cadena 'name'
	string country; // Variable miembro de tipo cadena 'country'
};

int main() {
	// Asignaci�n din�mica de memoria para una estructura de tipo MyStruct
	MyStruct* EmployeeStruct = new MyStruct; // Asignando memoria para una �nica instancia de MyStruct

	// Ingresar los miembros de la estructura desde el usuario
	cout << "ID del empleado (valor entero): ";
	cin >> EmployeeStruct->id; // Leyendo la entrada del usuario en el miembro 'id' de EmployeeStruct

	cout << "Ingresa el nombre del empleado: ";
	cin.ignore(); // Ignorando el car�cter de nueva l�nea de la entrada anterior
	getline(cin, EmployeeStruct->name); // Leyendo la entrada del usuario en el miembro 'name' de EmployeeStruct

	cout << "Ingresa el pa�s del empleado: ";
	cin.ignore();
	getline(cin, EmployeeStruct->country); // Leyendo la entrada del usuario en el miembro 'country' de EmployeeStruct

	// Mostrar los miembros de la estructura
	cout << "\nDetalles del empleado:" << endl;
	cout << "ID: " << EmployeeStruct->id << endl; // Mostrando el miembro 'id' de EmployeeStruct
	cout << "Nombre: " << EmployeeStruct->name << endl; // Mostrando el miembro 'name' de EmployeeStruct
	cout << "Pa�s: " << EmployeeStruct->country << endl; // Mostrando el miembro 'country' de EmployeeStruct

	// Liberar la estructura asignada din�micamente
	delete EmployeeStruct; // Liberando la memoria ocupada por el puntero EmployeeStruct

	return 0; 
}
