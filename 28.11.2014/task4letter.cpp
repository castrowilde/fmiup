#include <iostream>
using namespace std;

char letter(char n)
{
    if(n>=65 && n<=90)
        return n+32;
    if(n>=97 && n<=122)
        return n-32;
}

int main()
{
    char input;
    cout << "letter: ";
    cin >> input;
    cout << "Other letter: " << letter(input);
}
