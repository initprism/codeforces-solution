#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int n, a = { 0 };
  string s;

  for(cin >> n; n--;)
  {
    cin >> s;

    // 'T' % 7 = 0 // '4' - 48 = 4 
    // 'C' % 7 = 4 // '6' - 48 = 6
    // 'O' % 7 = 2 // '8' - 48 = 8
    // 'D' % 7 = 5 // '<' - 48 = 12
    // 'I' % 7 = 3 // 'D' - 48 = 20
    a += "4X8D6<"[s[0] % 7] - 48;
  }

  cout << a << endl;
}