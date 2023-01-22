#include <iostream>

using namespace std;

int main()
{
  int t, n;

  for(cin >> t; t--;)
  {
    cin >> n;
    n /= 2;
    if (n & 1) 
    {
      cout << "NO" << endl;
      continue;
    }

    cout << "YES" << endl;
    for(int i = 1; i <= n; ++i) cout << i * 2 << " ";
    for(int i = 1; i <  n; ++i) cout << i * 2 - 1 << " "; 

    cout << (n * 3) - 1 << endl;
  }
}