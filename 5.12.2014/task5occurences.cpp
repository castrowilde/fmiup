#include <iostream>
using namespace std;

int findNumbers(int n, int m)
{
    if(n<=9 && n!=m)
        return 0;
    if(n%10==m)
        return 1;
    else
        findNumbers(n/10, m);
}

int main()
{
    int input, k;
    cout << "Enter number: " << endl;
    cin >> input;
    cout << "Enter digit: " << endl;
    cin >> k;
    cout << findNumbers(input, k);
}
