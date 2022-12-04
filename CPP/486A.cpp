#include <iostream>

using namespace std;

int main ()
{
  long long n;
  cin >> n;

  // calculate f(n) for a given integer n.
  // pow(-1, n) * n + f(n - 1) === n / 2 - n % 2 * n;
  cout << n / 2 - n % 2 * n;
}

// STACK_OVERFLOW
// int f(int x) 
// {
//   if (x == 0) return 0;
//   return pow(-1, x) * x + f(x - 1);
// }