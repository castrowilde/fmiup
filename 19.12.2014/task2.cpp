#include <iostream>
using namespace std;

int diag(int *arr, int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum=sum+*(arr+i*n+j);
        }
    }
    return sum/((n*n)-n)/2;
}

int main()
{
    int arr[900];
    int n;
    cout << "n:" << endl;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for (int j=0;j<n;j++)
        {
           // cout << "array[" << i << "][" << j << "]=";
            cin >> arr[i*n+j];
        }
    }
    cout << diag(&arr, n);
}
