#include <iostream>
#include <string>

using namespace std;
//https://www.w3schools.com/cpp/cpp_strings.asp
//https://cplusplus.com/reference/string/string/

void StringConcatenation() {
	cout << "\nString Concatenation\n";
	//We can use '+' to concatenate (join) strings together
	string greeting = "Hello ";
	string world = "World";

	string greetingWorld = greeting + world;

	cout << greetingWorld << "\n";


	//We can also use the append() method
	string appendedString = greeting.append(world);

	cout << appendedString << "\n";
}

void NumbersWithStrings() {
	cout << "\nNumbers With Strings\n";
	//Because C++ uses + for concatenation and arithmetic addition, we need to be particular when using numbers with concatenation

	int x = 10;
	int y = 5;

	//Will be 15 (int)
	int intResult = x + y;

	string z = "10";
	string w = "5";

	//Will be "105" (string)
	string stringResult = z + w;

	//If we want to include different variables in our strings we can use .to_string() (from std)... but there are many ways to do this
	string combination = z + to_string(x);
	cout << combination;
}

void StringLength() {
	cout << "\nString Length\n";
	//We can get the size of a string by using either .size() or .length()

	string myString = "Hello World";

	cout << "The length of this string is: " << myString.length();
	cout << "The length of this string is: " << myString.size();
}

void StringAccessing() {
	cout << "\nString Accessing\n";

	string myString = "This shows how to access a string";
	//We can access different parts of a string easily
	
	//We can access specific characters within a string using an index
	cout << "The first character of this string is: " << myString[0] << "\n";
	cout << "The last character of this string is: " << myString[myString.length() - 1] << "\n";

	//We can reassign specific characters within a string using an index
	myString[0] = 'X';
	cout << "The first character of this string is now: " << myString[0] << "\n";

	//We can also find a specific character using .at()
	cout << "The 6th character of this string is: " << myString.at(5) << "\n";
	//We can similarly reassign a specific character using .at()
	myString.at(5) = 'X';
	cout << "The 6th character of this string is now: " << myString.at(5) << "\n";

	cout << myString << "\n";

}

void StringSpecialCharacters() {
	cout << "\nString Special Characters\n";
	//Using quotations within a string will cause issues as the text needs to be encased in quotations
	//To solve this, we can use backslashes (\) before the speechmarks!

	string myString = "This is the \"Recruits\"\n";
	cout << myString;

	//This problem will also happen with singular quotes and backslashes, and can be solved the same way
	myString = "This is the crew \\ new starters!\n";
	cout << myString;

	myString = "It\'s gonna be easy!";
	cout << myString;
}

void StringInputting() {
	cout << "\nString Inputting\n";

	string userInput;
	cout << "Please type a string: ";
	cin >> userInput;
	cout << userInput << "\n";
	
	//The next bit of code doesn't work until flushing the input buffer ... I don't know what that means but.. TO DO :)
	cin.ignore();

	//We have the issue where any whitespace will be regarding as a terminating character...
	//We can use the getline() method to include whitespace with our inputs!
	string newUserInput;
	cout << "Please type a new string: ";
	getline (cin, newUserInput);
	cout << "Your input with whitespace included: " << newUserInput << "\n";
}

void CStrings() {
	cout << "\nC Style Strings\n";

	//C strings are made with char arrays rather than string
	char myString[] = "List of chars!";

	cout << myString << "\n";
}
