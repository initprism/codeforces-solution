#include <iostream>
#include <string>

using namespace std;

int main () {
  size_t n, c = 0; 
  cin >> n;

  string s; 
  cin >> s;

  for(size_t i = 0; i < n; ++i) {
   if (s[i] == s[i+1]) c++;
  } 

  cout << c << endl;
}