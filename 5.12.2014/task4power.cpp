#include <iostream>
using namespace std;

int stepen(int n, int m)
{
    if(m==0)
        return 1;
    if(m==1)
        return n;
    else
        return n * stepen(n, m-1);
}

int main()
{
    int input, power;
    cout << "Enter number: " << endl;
    cin >> input;
    cout << "Enter power: " << endl;
    cin >> power;
    cout << stepen(input, power);
}
