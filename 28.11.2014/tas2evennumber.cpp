#include <iostream>
using namespace std;

bool evenNumber(int n)
{
    if(n%2==0)
        return true;
    return false;
}

int main()
{
    int input;
    cout << "n= ";
    cin >> input;
    cout << input << " is even: " << evenNumber(input);
}
