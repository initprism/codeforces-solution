#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
  set<char> s;
  size_t n;
  string str;
  cin >> n >> str;

  if (n < 26 ) {
    cout << "NO" << endl; 
    return 0;
  }

  transform(str.begin(), str.end(), str.begin(), ::tolower);
  for(const char& c : str)  s.insert(c);

  if(s.size() < 26)  cout << "NO" << endl;
  else               cout << "YES" << endl;
}

// classic version
//
// int main ()
// {
//   int n, q, p = {0}, c[27] = {0};
//   char ch;

//   for(cin >> n; n--; c[q]++){
//     cin >> ch;
//     p += !c[q = ch % 32];
//   }

//   cout << (p < 26 ? "NO" : "YES") << endl;
// }