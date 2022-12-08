#include <iostream>

using namespace std;

int main() 
{
  int n, x, p = { 0 }, q = { 0 };

  for(cin >> n; n--;)
  {
    cin >> x, p += x;
    if (p < 0) q++, p = 0;
  }

  cout << q;
}