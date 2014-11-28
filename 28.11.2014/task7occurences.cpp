#include <iostream>
#include <string>
using namespace std;

int occur(string number, char n)
{
    int counter=0;
    for(int i=0;i<=number.length();i++)
    {
        if(number[i]==n)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    string number;
    char n;
    cout << "Number= ";
    cin >> number;
    cout << "n= ";
    cin >> n;
    cout << occur(number, n);
}
