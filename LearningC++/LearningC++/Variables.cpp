#include <string>
#include <iostream>

using namespace std;

void Variables() {
	std::cout << "\nVariables\n";
	//Assigning variables
	int newInt = 5;
	double newDouble = 12.574;
	string newString = "Hello";
	char newChar = 'A';
	bool newBool = true;

	//Printing variables
	cout << newChar << "\n";

	//Printing variables within a string
	cout << "Int value: " << newInt << "\n";
	cout << "Double value: " << newDouble << "\n";
	cout << "String value: " << newString << "\n";
	cout << "Char value: " << newChar << "\n";
	cout << "Boolean value: " << newBool << "\n";

	//Assigning multiple variables at once
	int x = 3, y = 6, z = 9;

	//Adding variables together and printing
	cout << x + y + z << "\n";

	//Constants
	const int cannotChange = 7;
	// cannotChange = 5; ... compiler error

	/*
	You cannot assign a constant after the definition
	const int notAssignedYet;
	notAssignedYet = 5;
	*/ 
}