#include <iostream>

using namespace std;

int main() {
  string xs;
  cin >> xs;

  size_t count = 0;
  for(const char& x: xs) 
    if(x == '4' || x == '7') count++;

  if(count == 4 || count == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}