#include <iostream>

using namespace std;

int main () {
  size_t n;
  cin >> n;

  cout << n / 5 + (n % 5 != 0 ? 1 : 0) << endl;
}