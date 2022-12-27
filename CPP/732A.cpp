#include <iostream>

using namespace std;

int main()
{
  int k, r, a = {1}; cin >> k >> r;

  while(true) 
  {
    int x = ((k * a++) % 10);
    if (!x || x == r) break; 
  }

  cout << a - 1;
}