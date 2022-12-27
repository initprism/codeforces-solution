#include <iostream>

using namespace std;

int main()  
{
  int a, b; cin >> a >> b;

  int p = a >= b ? b : a;
  int q = (a >= b ? a - b : b - a) / 2;

  cout << p << " " << q;
}