#include <iostream>
#include <cmath>
#include "Functions.h" //Programmer defined header file
using namespace std;

int main() {
    cout <<"Square root of 16 is: " << sqrt(16) << endl;
    cout <<"Power of 2 raised to 3 is: " << pow(2, 3) << endl;
    cout <<"Cosine of 0 radians is: " << cos(0) << endl;
    cout <<"Sine of 90 degrees (converted to radians) is: " << sin(M_PI / 2) << endl;
    cout <<"Tangent of 45 degrees (converted to radians) is: " << tan(M_PI / 4) << endl;
    cout <<"Logarithm base 10 of 100 is: " << log10(100) << endl;
    cout <<"Exponential of 1 is: " << exp(1) << endl;
    cout <<"Absolute value of -5 is: " << abs(-5) << endl;
    cout <<"Ceiling of 4.2 is: " << ceil(4.2) << endl;
    cout <<"Floor of 4.8 is: " << floor(4.8) << endl;
    cout <<"Round of 4.5 is: " << round(4.5) << endl;
    cout <<"Addition of 5 and 3 is: " << addition(5, 3) << endl;
    return 0;
}