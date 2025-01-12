#include <iostream>  // Including the Input/Output Stream Library
#include <string>    // Including the String Library

int main() {
	// Dynamically allocate an integer
	int* dynamicInt = new int;  // Allocating memory for an integer and storing its address in dynamicInt
	*dynamicInt = 20;  // Assigning a value of 20 to the dynamically allocated integer

	// Dynamically allocate a character
	char* dynamicChar = new char;  // Allocating memory for a character and storing its address in dynamicChar
	*dynamicChar = 'C';  // Assigning the character 'C' to the dynamically allocated char

	// Dynamically allocate a string
	std::string* dynamicString = new std::string;  // Allocating memory for a string and storing its address in dynamicString
	*dynamicString = "C++ Dynamically allocated string.";  // Assigning a string value to the dynamically allocated string

	// Display the values
	std::cout << "Dynamically allocated integer: " << *dynamicInt << std::endl;  // Output the dynamically allocated integer value
	std::cout << "Dynamically allocated character: " << *dynamicChar << std::endl;  // Output the dynamically allocated character
	std::cout << "Dynamically allocated string: " << *dynamicString << std::endl;  // Output the dynamically allocated string

	// Deallocate the memory
	delete dynamicInt;  // Deallocating the memory occupied by the dynamically allocated integer
	delete dynamicChar;  // Deallocating the memory occupied by the dynamically allocated character
	delete dynamicString;  // Deallocating the memory occupied by the dynamically allocated string

	return 0;  // Returning 0 to indicate successful execution of the program
}