#include <iostream>

using namespace std;

int main () {

  int x, y;
  int a = {0};
  int r = {0};
  cin >> x; //count n 

  while(cin >> x >> y) 
  {
    a += y - x; 
    if (a > r) r = a;
  }

  cout << r;
}