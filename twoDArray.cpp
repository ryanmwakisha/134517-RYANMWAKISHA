//Simple 2D array example

#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int twoDarray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    //Accessing elements in a 2D array
    cout << "Element at twoDArray[1][2]: " << twoDarray[1][2] << endl;
    cout << "Array elements are: " << endl;
    for (int i = 0; i < 3; i++) //Loop through the rows
    {
        for (int j = 0; j < 4; j++)//Loop through the columns
         {
            cout << twoDarray[i][j] << " "; //Print each element
        }
        cout << endl;
    }
    return 0;
}