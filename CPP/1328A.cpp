#include <iostream>

using namespace std;
int main ()
{
  int t, x, y;
  cin >> t;
  
  while(t--)
  {
    cin >> x >> y;
    cout << (!(x % y) ? 0 : (y - x % y) % y) << endl;
  }
}