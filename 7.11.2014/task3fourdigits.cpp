#include <iostream>
using namespace std;
int main(){
    int number, a, b, c, d;
    cout << "Enter a 4-digit number:" << endl;
    cin >> number;
    a=(number/1000)%10;
    b=(number/100)%10;
    c=(number/10)%10;
    d=number%10;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    }
