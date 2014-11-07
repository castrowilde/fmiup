#include <iostream>
using namespace std;
int main(){
    int n, number, a, b, c, d, e;
    cout << "1- One digit number" << endl;
    cout << "2- Two digits numbers" << endl;
    cout << "3- Three digits number" << endl;
    cout << "4- Four digits number" << endl;
    cout << "5- Five digits number" << endl;
    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Enter number:" << endl;
    cin >> number;
    if(n==1){
        cout << number;}
    if(n==2){
        e=number%10;
        d=(number/10)%10;
        cout << d << "\n" << e;}
    if(n==3){
        e=number%10;
        d=(number/10)%10;
        c=(number/100)%10;
        cout << c << "\n" << d << "\n" << e;}
    if(n==4){
        e=number%10;
        d=(number/10)%10;
        c=(number/100)%10;
        b=(number/1000)%10;
        cout << b << "\n" << c << "\n" << d << "\n" << e;}
    if(n==5){
        e=number%10;
        d=(number/10)%10;
        c=(number/100)%10;
        b=(number/1000)%10;
        a=(number/10000)%10;
        cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e;
        }
    }
