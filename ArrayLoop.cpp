#include <iostream>

using namespace std;

int main() {
   //Declare variable
   int numbers[5], sum = 0, product = 1;
   // Input 5 integers from the user
   cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
         cin >> numbers[i];
         sum += numbers[i];
         product *= numbers[i];
    }
    // Output the integers in reverse order
    cout << "You entered: ";
    for (int i = 4; i >= 0; i--) {
        cout << numbers[i] << " ";
    cout << "\nThe sum of the integers is: " << sum << endl;
    cout << "The product of the integers is: " << product << endl;
    cout << "The product of the integers is: "<< product << endl;
    cout << endl;
    return 0;
}