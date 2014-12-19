#include <iostream>
using namespace std;

int numNum(int n)
{
    int br=0;
    while (n>0)
    {
        br++;
        n/=10;
    }
    return br;
}

int isEven(int n)
{
    int br=numNum(n);
    return (br%2==0);
}

int main()
{
    int array[5]={12,123,1234,12345,123456};
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        cout << isEven(array[i]) << endl;
    }
}
