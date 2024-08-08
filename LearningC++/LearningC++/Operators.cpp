#include <iostream>

//https://cplusplus.com/doc/tutorial/operators/
//https://www.w3schools.com/cpp/cpp_operators.asp

void ArithmeticOperators() {
	std::cout << "\nArithmetic Operators\n";
	float x = 10;
	float y = 5;

	float result;
	//Arithmetic Operators ------------------------------------------------------------------------------------

	// Addition
	result = x + y;

	// Subtraction
	result = x - y;

	// Multiplication
	result = x * y;

	// Division
	result = x / y;

	// Modulus (Returns the remainder... only used with ints.. I use casting here to turn floats to ints)
	result = (int)x % (int)y;

	// Increment
	result++;
	++result;

	// Decrement
	result--;
	--result;


}

void AssignmentOperators() {
	std::cout << "\Assignment Operators\n";
	float x = 10;
	float y = 5;

	//Assignment Operators -------------------------------------------------------------------------------------
	//All of these assigns the variable to the result

	// = Assigns the value of the right
	x = 5;

	// += Increases the current value by the value of the right
	x += 3;

	// -= Decreases the current value by the value of the right
	x -= 3;

	// *= Multiplies the current value by the value of the right
	x *= 3;

	// /= Divides the current value by the value of the right
	x /= 3;

	// %= Assigns the value to the result of the modulus operation of the value to the right
	int mod = 3;
	mod %= 3;

	// &= Assigns the value to the result of a Bitwise AND
	int z = 5;
	z &= 3;

	// |= Assigns the value to the result of a Bitwise Inclusive OR
	z = 5;
	z |= 3;

	// ^= Assigns the value to the result of a Bitwise Exclusive OR
	z = 5;
	z ^= 3;

	// >>= Assigns the value to the result of bit-shift right
	z = 5;
	z >>= 3;

	// <<= Assigns the value to the result of bit-shift left
	z = 5;
	z <<= 3;

}

void ComparisonOperators() {
	std::cout << "\Comparison Operators\n";
	float x = 10;
	float y = 5;
	//Comparison Operators -------------------------------------------------------------------------------------
	//Compares values and returns either 1 or 0

	// == Equal To
	if (x == y) {
		//Returns 0 because 10 != 5
	}

	// != NOT Equal To
	if (x != y) {
		//Returns 1 because 10 != 5
	}

	// > Greater Than (EXCLUSIVE)
	if (x > y) {
		//Returns 1 because 10 is greater than 5
	}

	// >= Greater Than OR Equal To (INCLUSIVE)
	if (x >= y) {
		//Returns 1 because 10 is greater than or equal to 5
	}

	// < Less Than (EXCLUSIVE)
	if (x < y) {
		//Returns 0 because 10 is not less than 5
	}

	// <= Less Than OR Equal To (INCLUSIVE)
	if (x <= y) {
		//Returns 0 because 10 is not less than or equal to 5
	}
}

void LogicalOperators() {
	std::cout << "\Logical Operators\n";
	float x = 10;
	float y = 5;
	//Logical Operators -------------------------------------------------------------------------------------
	//Test for true and returns either 1 or 0

	// && Logical AND
	if (x == 10 && y == 5) {
		//Returns 1 because x does equal 10 AND y does equal 5
	}

	// || Logical OR
	if (x == 10 || y == 7) {
		//Returns 1 because x does equal 10 even if y does not equal 7 because at least one was true
	}

	// ! Logical NOT
	if (!x == 10) {
		//Returns 0 because x does equal 10, resulting in true (1), but then invert the result and return false (0)
	}
}