#include <iostream>
#include <set>

using namespace std;

int main ()
{
  size_t x; 
  set<size_t> s;

  do {
    cin >> x;
    s.insert(x);
  } while (cin.peek() != '\n');

  cout << 4 - s.size() << endl;
}