#include <iostream>
using namespace std;

int nod(int n, int m)
{
    while(m!=0)
    {
        int t=m;
        m=n%m;
        n=t;
    }
    return n;
}

int main()
{
    int n, m;
    cout << "n= ";
    cin >> n;
    cout << "m= ";
    cin >> m;
    if(m>n)
    {
      int temp;
        temp=n;
        n=m;
        m=temp;
    }
    //cout << n << " " << m;
    cout << "NOD na " << n << " & " << m << " = " << nod(n,m);
}
