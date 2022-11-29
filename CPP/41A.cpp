#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string s1, s2;
  cin >> s1 >> s2;

  size_t limit = s1.length();

  for (size_t i = 0; i < limit; ++i)
  {
    if (s1[i] != s2[limit - i - 1])
    {
      cout << "NO" << endl;
      goto fin;
    }
  }

  cout << "YES" << endl;
  fin:;
}