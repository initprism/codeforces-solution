#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main ()
{
  string a, b ,c;
  cin >> a >> b >> c;

  a.append(b);
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());

  cout << (a == c ? "YES" : "NO")  << endl;
}