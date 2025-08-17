#include <iostream>
using namespace std;

int main(){
    int profit, costPrice, sellingPrice;
    cout<<"Enter the cost price of the item: \n";
    cin>>costPrice;
    cout<<"Enter the selling price of the item: \n";
    cin>>sellingPrice;

    profit = sellingPrice - costPrice;
    cout<<"The profit made is: " <<profit <<endl;

}