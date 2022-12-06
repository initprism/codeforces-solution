#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
  size_t n, p, q;
  cin >> n;

  vector<size_t> v(n, 1);

  for(cin >> q; q-- > 0; v[p-1] = 0)
    cin >> p;

  for(cin >> q; q-- > 0; v[p-1] = 0)
    cin >> p;

  const auto it = find(v.begin(), v.end(), 1);
  if (it == v.end())
    cout << "I become the guy.";
  else 
    cout << "Oh, my keyboard!";
}