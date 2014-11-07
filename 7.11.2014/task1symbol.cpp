#include <iostream>
using namespace std;
int main(){
    char input;
    cout << "Enter letter, number or symbol:" << endl;
    cin >> input;
    if(input>=48 and input<=57){
        cout << "Number." << endl;}
    if(input>=65 and input<=90){
        cout << "Upper-case letter." << endl;}
    if(input>=97 and input<=122){
        cout << "Lower-case letter." << endl;}
    if(input<=32){
        cout << "Symbol." << endl;}
    }
