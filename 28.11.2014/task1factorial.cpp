#include <iostream>
using namespace std;

int factorial(int n)
{
    int product=1, i=1;
    while (i<=n)
    {
        product=product*i;
        i++;
    }
    return product;
}

int main()
{
    int input;
    cout << "n= ";
    cin >> input;
    cout << "Factorial is " << factorial(input);
}
