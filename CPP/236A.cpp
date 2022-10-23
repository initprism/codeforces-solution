#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

string nub(string s) {
  auto last = s.end(); 

  for (auto first = s.begin(); first != last; ++first) 
  {
    last = remove (next(first), last, *first);
  }

  s.erase(last, s.end());

  return s;
}

int main () {
  string s;
  cin >> s;

  string u = nub(s);

  if (u.size() % 2 != 0) 
  {
    cout << "IGNORE HIM!";
  }
  else
  {
    cout << "CHAT WITH HER!";
  }
}