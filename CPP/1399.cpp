#include <iostream>
#include <algorithm>

using namespace std;

int main () 
{
  int t, n;

  for(cin >> t; t--;) 
  {
    cin >> n; int xs[n - 1]; bool t = false;

    for(int i = 0; i < n; ++i) cin >> xs[i];
    sort(xs, xs + n);

    for(int i = 1; i < n; ++i) if(xs[i] - xs[i - 1] > 1){ t = true; break; }

    cout << (t ? "NO" : "YES") << endl;
  }
}