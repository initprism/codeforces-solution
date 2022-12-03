#include <iostream>

using namespace std;

int main() {
  size_t n;
  size_t p, q, r, s;
  
  cin >> n;
  do {
    ++n;
    p = n / 1000; q = n / 100 % 10;  r = n / 10  % 10; s = n % 10;
  } while (p == q || p == r || p == s || q == r || q == s || r == s);

  cout << n << endl;
}