#include <iostream>

using namespace std;

int main()
{
  int k, a, b;

  for(cin >> k; k--;)
  {
    cin >> a >> b;
    cout << abs((a - b) / 10) + ((a - b) % 10 ? 1 : 0) << endl;
  }
}