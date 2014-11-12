#include <iostream>
using namespace std;
int main(){
    int number, check;
    cout << "Enter number:" << endl;
    cin >> number;
    for(int i=2;i<number;i++){
       check=number%i;
       if(check==0){
            cout << number << " is not prime, it's divisible by " << i << endl;
            i=number;}
       if(check!=0 && i==number-1){
            cout << number << " is prime." << endl;}
        }
}
