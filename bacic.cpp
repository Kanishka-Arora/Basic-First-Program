#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "Enter first number\n";
    cin >> num1;
    cout << "Enter second number\n";
    cin >> num2;

    cout << "\nthe addition is " << num1 + num2 ;
    cout << "\nthe subtraction is " << num1 - num2;
    cout << "\nthe multiplication is " << num1 * num2 ;
    
    if(num2 != 0)
        cout << "\nthe division is " << num1 / num2 ;
        else
        cout << "\ndivision not possible" ;
    
    return 0;
}