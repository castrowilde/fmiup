#include <iostream>
using namespace std;

int mreja[3][3]={0,0,0,1,1,1,0,1,0};
int counter=0;

int broika(int m, int n)
{
    if(mreja[m-1][n]==mreja[m][n])
    {
        counter++;
        //broika(m-1,n-1);
    }
    if(mreja[m+1][n]==mreja[m][n])
    {
        counter++;
        //broika(m+1,n+1);
    }
    if(mreja[m][n-1]==mreja[m][n])
    {
        counter++;
        //broika(m+1,n-1);
    }
    if(mreja[m][n+1]==mreja[m][n])
    {
        counter++;
        //broika(m-1,n+1);
    }
}

int main()
{
    int k, l;
    cout << "Enter m and n:" << endl;
    cin >> k >> l;
    cout << broika(k, l);
}
