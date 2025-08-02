#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables for the user's profile
    string firstName, lastName, FavouriteMeal, FavouriteMovie;
    

    // Prompt the user for their profile information
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << firstName << " " << lastName  << endl;
    cout << "Enter your favourite meal: ";
    cin >> FavouriteMeal;
    cout << "Enter your favourite movie: ";
    cin >> FavouriteMovie;


   

    return 0;
}