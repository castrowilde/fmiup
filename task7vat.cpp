#include <iostream>

using namespace std;

int main()
{
  double price, vat;
  int items;
  cout << "What's the price of the item?" << endl;
  cin >> price;
  cout << "How many items are you buying?" << endl;
  cin >> items;
  vat = (items*price)*0.2;
  cout << "You're paying " << vat << " lv. in taxes!" << endl;
  return 0;
}

