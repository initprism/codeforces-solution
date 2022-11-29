#include <iostream>
#include <string>

using namespace std;

int main()
{
  size_t n, t;
  string s;
  cin >> n >> t >> s;

  while (t--)
  {
    for(size_t i = 1; i < n; ++i) 
    {
      if(s[i - 1] == 'B' && s[i] == 'G') 
      {
        s[i - 1] = 'G';
        s[i]     = 'B';
        ++i;
      }
    }
  }

  cout << s << endl;
}