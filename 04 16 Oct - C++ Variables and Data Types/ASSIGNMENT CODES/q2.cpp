// Q2 - Print the ASCII value of character ‘U’. (Easy)
// Sample Input : already mentioned as ‘U’
// Sample Output : 85

// note ==>

// bool -> char -> short int -> int -> 
// unsigned int -> long -> unsigned -> 
// long long -> float -> double -> long double

#include<iostream>
using namespace std;
int main(){
    cout<<"Input a Character between A to Z : ";
    char u;
    cin>>u;
    cout<<"The ASCII value of "<<u<<" is "<<(int)u;
}