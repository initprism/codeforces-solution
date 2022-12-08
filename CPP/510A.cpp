#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  string p(m, '#');
  string q1(m, '.');
  string q2(m, '.');
  q1.replace(m - 1, 1, "#");
  q2.replace(0, 1, "#");

  for (int i = 0; i < n; i++)
  {
    switch (i % 4)
    {
    case 0:
    case 2:
      cout << p << endl;
      break;
    case 1:
      cout << q1 << endl;
      break;
    case 3:
      cout << q2 << endl;
      break;
    }
  }
}