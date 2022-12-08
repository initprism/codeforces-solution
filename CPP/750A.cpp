#include <iostream>

using namespace std;

const int LT = 60 * 4;

int main()
{
  int n, t, p = 0, q = 0; cin >> n >> t;

  for(int a = 5; n--; a += 5, ++q)
  {
    p += a; 
    if(LT - (t + p) < 0) break;
  }

  cout << q << endl;
}