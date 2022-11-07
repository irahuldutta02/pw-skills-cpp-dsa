// Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%) (Easy)
// Sample Input : 8  10
// Sample Output :
// Sum = 18
// Difference = -2
// Product = 80
// Division = 0.8

# include <iostream>
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Sum = " << num1 + num2<<endl;
    cout <<"Difference = " << num1 - num2<<endl;
    cout <<"Product = " << num1 * num2<<endl;
    cout << "Division = " << num1 / num2<<endl;
    return 0;
}