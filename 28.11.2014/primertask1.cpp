#include <iostream>
using namespace std;

double func(double n)
{
    return n*n;
}

int main()
{
    double a;
    cout << "a= ";
    cin >> a;
    cout << "a^2= " << func(a);
    return 0;
}
