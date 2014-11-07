#include <iostream>

using namespace std;

int main()
{
  int myAge, currentYear, compareYear;
  cout << "Enter your age:" << endl;
  cin >> myAge;
  cout << "Enter current year:" << endl;
  cin >> currentYear;
  cout << "Enter compare year:" << endl;
  cin >> compareYear;
  if (compareYear-currentYear>100){
  cout << "Oops, you'd be dead by then. Sorry! :(" << endl;
  }
  else{
    cout << "You're going to be " << compareYear-currentYear+myAge << " years old in " << compareYear << endl;
  }
  return 0;
}
