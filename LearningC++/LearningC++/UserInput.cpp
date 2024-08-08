#include <iostream>

using namespace std;

void UserInput() {
	std::cout << "\nUser Input\n";
	int x;
	int y;

	int result;

	cout << "Please input a number: ";
	//Assign x to the extracted input from the user
	cin >> x;
	cout << "Your number is: " << x << "\n";

	cout << "Please input a second number: ";
	//Assign y to the extracted input from the user
	cin >> y;
	cout << "Your number is: " << x << "\n";

	result = x + y;

	cout << x << " + " << y << " = " << result << "\n";


}