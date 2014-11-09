#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int number;
    string numberconv;
    cout << "Enter number:" << endl;
    cin >> number;
    numberconv = std::to_string(number);
    cout << numberconv << endl;

}
