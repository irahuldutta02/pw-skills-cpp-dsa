// Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
// both the conditions 'a < 50' and 'a < b' are true.  (Easy)
// Sample Input 1 : 1,  2
// Sample Output 1: 1
// Sample Input 2: 2, 2
// Sample Output 2: 0

// wrong question

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Input 1st number : ";
    cin >> a;
    cout << "input 2nd number : ";
    cin >> b;

    cout << (a < 50 && a < b) ? 1 : 0;
    return 0;
}