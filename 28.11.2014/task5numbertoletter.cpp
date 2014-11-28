#include <iostream>
using namespace std;

char numberToLetter(int n)
{
    int a, b, c, d;
    a=n/1000;
    b=(n-(a*1000))/100;
    c=(n-(a*1000)-(b*100))/10;
    d=(n-(a*1000)-(b*100)-(c*10));
    return a+b+c+d+64;
}

int main()
{
    int input;
    cout << "n= ";
    cin >> input;
    cout << numberToLetter(input);
}
