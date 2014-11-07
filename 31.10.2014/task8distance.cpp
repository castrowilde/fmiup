#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a1,a2,b1,b2;
  double distance;
  cout << "Enter the coordinates of point A:"<< endl;
  cin >> a1 >> a2;
  cout << "Enter the coordinates of point B:"<< endl;
  cin >> b1 >> b2;
  distance = sqrt(pow((b1-a1),2) + pow((b2-a2),2));
  cout << "Distance is " << distance << " ."<< endl;
  return 0;
}
