#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cout << "Enter a 7-letter word: " << endl;
    getline(cin, input);
    for(int i=6;i>=0;i--)
    {
        cout << input[i]; // Po-dobre li e ot syzdavane na nov string?
    }
}
