#include <iostream>
#include <algorithm>

using namespace std;

int a, k[4];

int main ()
{
  for (int i = 0; i < 4; k[i] = a, i++) cin >> a;

  int a = min({k[0], k[2], k[3]});
  int b = min({k[0] - a, k[1]});

  cout << a * 256  + b * 32 << endl;
}