#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string x, y;
  cin >> x >> y;

  transform(x.begin(), x.end(), x.begin(), ::toupper);
  transform(y.begin(), y.end(), y.begin(), ::toupper);

  if (x == y) 
    cout << 0 << endl;
  else if (x < y) 
    cout  << -1 << endl;
  else 
    cout << 1 << endl;
}