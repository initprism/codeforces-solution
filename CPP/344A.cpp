#include <iostream>
#include <string>

using namespace std;

int main()
{
  size_t n, i, k = { 0 };
  string ps, cs;

  for(i = 0, cin >> n; i++ < n; ps = cs)
  {
    cin >> cs;
    if (ps != cs) k++;
  }
  cout << k << endl;
}