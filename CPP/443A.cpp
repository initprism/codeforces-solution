#include <iostream>

using namespace std;

int main ()
{
  int n = {0}, az[27] = {0};
  char c;

  // ascii 123: }
  // ascii 125: }
  for(; c ^ 125; c != 123 && c >= 97  ? n += !az[c - 97]++ : 0) cin >> c;
  cout << n;
}