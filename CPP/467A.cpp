#include <iostream>

using namespace std;

int main()
{
  size_t n, r = 0;
  cin >> n;

  while(n--)
  {
    size_t p, q;
    cin >> p >> q;

    if (q - p >= 2) r++;
  }

  cout << r << endl;
}