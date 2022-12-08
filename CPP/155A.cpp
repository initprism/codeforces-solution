#include <iostream>

using namespace std;

int main ()
{
  int n, x;
  cin >> n >> x;

  int mx = x, mn = x, a = 0;

  for(;n--;)
  {
    cin >> x;
    x > mx ? mx = x, a++ : 0;
    x < mn ? mn = x, a++ : 0;
  }

  cout << a << endl;
}