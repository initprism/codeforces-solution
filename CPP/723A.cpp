#include <iostream>

using namespace std;

#define median(x, y, z) max(min(x, y), min(max(x, y), z));

int main()
{
  int x1, x2, x3; cin >> x1 >> x2 >> x3;
  int m = median(x1, x2, x3);

  cout << abs(x1 - m) + abs(x2 - m) + abs(x3 - m) << endl;
}