#include <cmath>
#include <iostream>

using namespace std;

void BasicMaths()
{
    //Max() returns highest value
    cout << max(5,10) << "\n";
    
    //Min() returns lowest value
    cout << min(5, 10) << "\n";
}

void CMath()
{
    //CMath Library Specific

    //Sqrt - Square roots
    cout << sqrt(64) << "\n";
    //Cbrt - Cube root
    cout << cbrt(64);
    //Round - Rounds to nearest int
    cout << round(6.54) << "\n";
    //Log - Natural Log
    cout << log(2) << "\n";
    //Abs - Returns absolute value (The positive value)
    cout << abs(-4.4) << "\n";
    //Ceil - Returns the value rounded up to nearest int
    cout << ceil(5.5) << "\n";
    //Floor
    cout << floor(5.5) << "\n";
    //Fdim - Returns positive difference of two values
    cout << fdim(-5, -9) << "\n";
    //Pow - Returns value of x to the power y
    cout << pow(2, 4) << "\n";
    //Sin , Tan, Cos - returns the radian value
    cout << sin(60) << "\n";
    cout << tan(60) << "\n";
    cout << cos(60) << "\n";
}
