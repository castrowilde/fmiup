#include <iostream>
using namespace std;
int main()
{
    int array[10] = {9,3,5,7,1,2,4,6,8,10};
    int value=0, j;
    for (int i=1;i<=9;i++)
    {
        value = array[i];
        j = i-1;
        while (j>=0 && array[j]>value)
        {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = value;
    }
    for (int k=0;k<=9;k++)
    {
        cout << array[k] << endl;
    }
}
