#include <iostream>

using namespace std;
 int main() {
    // Declare variables for the integer operations
    int num1, num2;
    string sum, difference, product, division;;

    // Prompt the user for two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;  
    division = num1 / num2;

    
    cout << "sum: " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "product: " << product << endl;
    cout << "division: " << division << endl;

    return 0;
 }