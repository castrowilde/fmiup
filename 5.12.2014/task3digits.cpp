#include <iostream>
using namespace std;

int sumNumbers(int n)
{
    if(n<10)
        return n;
    else
        return n%10 + sumNumbers(n/10);
}

int main()
{
    int input;
    cout << "Enter number: " << endl;
    cin >> input;
    cout << sumNumbers(input);
}
