#include <iostream>
using namespace std;
int main()
{
    int i, temp, div, rev=0;
    cout<<"Enter number: " << endl;
    cin>>i;
    temp=i;
    while(temp>0)
    {
        div=temp%10;    // Otdelyame chislata 1 po 1
        temp/=10;       // Kato delim s % a posle i temp na 10
        rev=rev*10+div; // Posle gi umnojavame po 10 za da obrazuvame sledvashtoto chislo (koetoe
    }
    if(rev==i)
    {
        cout << "Palindrome!" << endl;
    }
    else
    {
        cout << "Not a palindrome!" << endl;
    }
}
