#include <iostream>

using namespace std;

int main ()
{
  size_t n;
  cin >> n;

  for (size_t i = 0; i < n; ++i)
  {
    int x;
    cin >> x;

    if (x != 0)
    {
      cout << "HARD" << endl;
      return 0;
    }
  }

  cout << "EASY" << endl;
}