#include <iostream>
#include <limits>

using namespace std;

int main ()
{
  size_t n, p, i;
  size_t max_v = { 0 }, max_i = { 0 };
  size_t min_v = { numeric_limits<size_t>::max() }, min_i = { 0 };

  for(i = 0, cin >> n; i < n;  ++i)
  {
    cin >> p;
    if(p > max_v)
    {
       max_v = p;
       max_i = i;
    }

    if(p <= min_v)
    {
      min_v = p;
      min_i = i;
    }
  }

  cout << max_i + n - 1 - min_i - (max_i > min_i) << endl;
}