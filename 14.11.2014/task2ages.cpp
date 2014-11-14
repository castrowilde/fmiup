#include <iostream>
using namespace std;
int main()
{
    int ages[50];
    int n, age=0, maxage=0, minage;
    cout << "Enter number: " << endl;
    cin >> n;
    for (int i=1;i<=n; i++)
    {
        cin >> ages[i-1];
    }
    for (int j=0;j<n; j++)
    {
        if(ages[j]>maxage)
        {
            maxage=ages[j];
        }
        minage=ages[0];
        if(ages[j]<minage)
        {
            minage=ages[j];
        }
    }
    cout << "Max age is " << maxage << endl;
    cout << "Min age is " << minage << endl;
}
