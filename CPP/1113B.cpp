#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main ()
{
  int n, x; 
  vector<int> v;

  for(cin >> n; n--; v.push_back(x)) cin >> x;

  int min_elem = *min_element(v.begin(), v.end());
  int acc_elem = accumulate(v.begin(), v.end(), 0);

  int min_sum = acc_elem;
  for(const int e : v)
  {
    for(int i = 1; i <= e; ++i)
    {
      if (e % i != 0) continue;
      int x = acc_elem - e + (min_elem * (i - 1)) + (e / i);

      min_sum > x ? min_sum = x : 0;
    }
  }
  cout << min_sum << endl;
}