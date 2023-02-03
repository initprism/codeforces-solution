#include <iostream>

using namespace std;

int main()
{
  int n, v;
  cin >> n >> v;

  if (n - 1 <= v)
  {
    cout << n-1 << endl;
  }
  else
  {
    int result = v;
    int to =  n - 1 - v;
    for(int i = 2; to--; ++i) result += i;

    cout << result << endl;
  }
}