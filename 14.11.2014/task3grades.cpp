#include <iostream>
using namespace std;
int main()
{
    int grades[5], sum=0;
    double average;
    cout << "Enter your grades: " << endl; // pls enter <=2n<=6
    for(int i=0;i<5;i++)
    {
        cin >> grades[i];
    }
    for(int j=0;j<5;j++)
    {
        sum = sum + grades[j];
    }
    cout << "Average is: " << sum/5.0 << endl;
}
