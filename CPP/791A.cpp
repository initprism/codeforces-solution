#include <iostream>

using namespace std;

size_t solve(size_t a, size_t b) {
  if(a > b) return 0;
  return 1 + solve(a * 3, b * 2);
}

int main () {
  size_t a, b;
  cin >> a >> b;

  size_t result = solve(a, b);
  cout << result << endl;
}
