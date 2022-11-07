// Q1 - Write a program to check whether two numbers (entered by user) are equal or not. (Easy)
// Sample Input 1: 1,  2
// Sample Output 1: 0
// Sample Input 2: 2, 2
// Sample Output 2: 1

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Input First Number : ";
    cin >> a;
    cout << "Input Second Number : ";
    cin >> b;
    cout << (a == b) ? 1 : 0;
}
