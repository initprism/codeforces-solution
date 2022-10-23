#include <iostream>

using namespace std;

int main()
{
  size_t n, k;
  cin >> n >> k;

  for (; k != 0; --k)
  {
    size_t last_digit = n % 10;

    if (last_digit == 0)
    {
      n /= 10;
    }
    else
    {
      n--;
    }
  }

  cout << n << endl;
}