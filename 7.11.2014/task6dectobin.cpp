#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter number:" << endl;
    cin >> number;
    cout << number << " backwards in binary is: " << endl;
    int bin = 0, k = 1;
    while (number){
        bin += (number % 2) * k;
        k *= 10;
        number /= 2;
    }
    cout << bin;
}
