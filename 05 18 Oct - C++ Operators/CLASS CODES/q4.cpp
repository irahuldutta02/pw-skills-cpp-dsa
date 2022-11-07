#include <iostream>

using namespace std;

int main()
{
  int a = 4;
  cout << sizeof(a) << endl; // 4

  char name = 'a';
  cout << sizeof(name) << endl; // 1

  bool flag;
  a == name ? flag == true : flag = false;
  cout << flag << endl; // false (0)

  cout << (&a) << endl; // address of a veriable

  a = 6;
  int b = 5;
  cout << (a++) << endl; //post increment // 6 
  cout << (--b) << endl; //pre decriment // 4

  return 0;
}
