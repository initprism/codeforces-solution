#include <iostream>

using namespace std;

int main() 
{
  size_t k, l, m, n, d;
  size_t p = { 0 }, i = { 0 };

  for(cin >> k >> l >> m >> n >> d; i++ < d;)
    p += !(i%k && i%l && i%m && i%n);

  cout << p << endl;
}