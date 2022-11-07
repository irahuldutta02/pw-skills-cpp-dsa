// operators 1

#include <iostream>
using namespace std;
int main()
{
    int num1 = 6, num2 = 3;

    cout << "-------------------" << endl;
    cout << "-------------------" << endl;

    cout << num1 + num2 << endl; // 9 // addition
    cout << num1 - num2 << endl; // 3 // substraction
    cout << num1 * num2 << endl; // 18 // multiplication
    cout << num1 / num2 << endl; // 2 // division
    cout << num1 % num2 << endl; // 0 // modulus

    cout << "-------------------" << endl;
    cout << "-------------------" << endl;

    cout << (num1 == num2) << endl; // false (0) // equal
    cout << (num1 != num2) << endl; // true (1) // not equal to
    cout << (num1 >= num2) << endl; // true (1) // greter equal to
    cout << (num1 <= num2) << endl; // false (0) // smaller equal to

    cout << "-------------------" << endl;
    cout << "-------------------" << endl;

    num1 += 3;
    cout << num1 << endl; // 6+3=9 // plus equal to
    num2 -= 2;
    cout << num2 << endl; // 3-2=1 // minus equal to
    num1 /= 3;
    cout << num1 << endl; // 9/3=3 // divition equal to
    num2 *= 2;
    cout << num2 << endl; // 1*2=2 // multiplication equal to

    cout << "-------------------" << endl;
    cout << "-------------------" << endl;

    return 0;
}

//code to sum two numbers