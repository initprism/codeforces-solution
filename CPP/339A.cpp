#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

template <typename T>
string intersperse(const T& v, const string& delim){
  ostringstream oss;

  for (const auto& i: v)
  {
    if (&i != &v[0]) oss << delim;
    oss << i;
  }

  return oss.str();
}

int main() {
  string s; 
  cin >> s;

  string::iterator iter = remove(s.begin(), s.end(), '+');
  s.erase(iter, s.end());
  sort(s.begin(), s.end());

  cout << intersperse(s, "+") << endl;
}