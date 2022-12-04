#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  size_t n, i, k;
  vector<size_t> v;

  for(i = 0, cin >> n, v.resize(n); i++ < n; v.at(k-1) = i)
    cin >> k;

  for(const auto &e: v)
    cout << e << " ";
}