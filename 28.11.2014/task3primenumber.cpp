#include <iostream>
#include <cmath>
using namespace std;

bool primeNumber(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int input;
    cout << "n= ";
    cin >> input;
    cout << "n is prime: " << primeNumber(input);
}
