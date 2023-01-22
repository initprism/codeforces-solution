#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t;

  for(cin >> t; t--; )
  {
    string s; cin >> s;
    cout << s[0];
    for(int i = 0; i < s.size(); i +=2) cout << s[i + 1];
    cout << endl;
  }
}