#include <iostream>

using namespace std;

int main()
{
  size_t n, h, r = {0};
  cin >> n >> h;

  for (size_t i = 0; i < n; ++i)
  {
    size_t x;
    cin >> x;
    x <= h ? r++ : r += 2;
  }

  cout << r << endl;
}