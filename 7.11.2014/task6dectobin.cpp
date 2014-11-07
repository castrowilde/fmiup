#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter number:" << endl;
    cin >> number;
    cout << number << " backwards in binary is: " << endl;
    while(number > 0) {
        int binary = number % 2;
        number /= 2;
        cout << binary;
    }
}
