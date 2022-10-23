#include <iostream>

using namespace std;

int main () {
  size_t k, n, w;
  cin >> k >> n >> w;

  size_t total_cost = 0;
  for(int i = w; i > 0; --i)  total_cost += k * i;

  int diff = total_cost - n;
  cout << (diff < 0 ? 0 : diff) << endl;
}
