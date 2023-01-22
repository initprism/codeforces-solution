#include <iostream>

using namespace std;

int main ()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int c1 { k * l / nl }, c2 { c * d }, c3 { p / np };
  cout << min(min(c1, c2), c3) / n << endl;
}