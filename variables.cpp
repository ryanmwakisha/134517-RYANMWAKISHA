#include <iostream>

using namespace std;
int myFunction(int); // Function prototype

const int globalVar = 20; // Global variable
int main()
{
    const float myConstVar = 3.142; // Constant variable
    int localVar = 10; //Local Variable
    cout << myFunction(localVar) << endl; //This will print the value of localVar
}

int myFunction(int paramVar1, float paramVar2) // Function definition with default parameter{
{
    
    int localVar2 = 40; //Local Variable
    int localVar3 = paramVar2;
    float localVar4 = paramVar2;
    float sum = localVar2 + localVar3 + globalVar; //Using both local and global variables
    cout << "Value of local variable in main: " << localVar2 << endl; //This will cause an error
    cout << "Value of global variable: " << globalVar << endl;
    cout << "Sum of variables: " << sum << endl;
    return 0;
}