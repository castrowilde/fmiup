#include <iostream>
#include <string>
using namespace std;
int main()
{
    char c;
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << "Designate sign: ";
    cin >> c;
    for(int i=1; i<=n; i++)
    {
        string str(n, c) // Ima nachin  da izkarame znacite s ucheni veche neshta, ama tova e nai-kratko :D
        cout << c << endl;
    }
}
