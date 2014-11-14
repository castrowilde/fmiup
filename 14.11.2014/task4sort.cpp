#include <iostream>
using namespace std;
int main()
{
    int array[] = {9,7,5,3,1};
    bool sorted1, sorted2;
    for(int i=1;i<5;i++)
    {
        if((array[i]>array[i-1]) && i==4)
        {
            sorted1=true;
            //cout << "Yep." << endl;
        }
        else
            sorted1=false;
            //cout << "Nope." << endl;
    }
    for(int j=4;j>=1;j--)
    {
        if((array[j]>array[j+1]) && j==1)
        {
            sorted2=true;
            //cout << "Yep." << endl;
        }
        else
            sorted2=false;
            //cout << "Nope." << endl;
    }
    if(sorted1==true || sorted2==true)
    {
        cout << "Array is sorted!" << endl;
    }
    else
        cout << "Array is not sorted!" << endl;
}
