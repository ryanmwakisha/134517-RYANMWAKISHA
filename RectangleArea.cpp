#include <iostream>
using namespace std;

int main(){
    //Declare variables for the rectangles dimensions
    int length; //Length of the rectangle
    int width;  //Width of the rectangle
    string fName, lName; //First and last name of the user

    //Prompt the user for the length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";   
    cin >> width;
    cout <<"Enter your first name: ";
    cin >> fName;
    cout <<"Enter your last name: ";
    cin >> lName;

    //Calculate the area of the rectangle
    int area = length * width;  

    //Output the area of the rectangle
    cout << "                                  \n";
    cout << "The area of the rectangle is: " << area << endl;
    cout << "Hello, " << fName << " " << lName << "! The area of the rectangle is: " << area << endl;

    return 0; 


}