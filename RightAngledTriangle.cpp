#include <iostream>

using namespace std;
int main() {
    int base =10, height = 7, hypotenuse = 12;

    // Calculate the area of the right-angled triangle
    double area = 0.5 * base * height;
    cout << "Area of the right-angled triangle: " << area << endl;
     
// Calculate the perimeter of the right-angled triangle
    double perimeter = base + height + hypotenuse;
    cout << "Perimeter of the right-angled triangle: " << perimeter << endl;

}