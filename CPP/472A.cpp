#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  (n % 2) ? cout << "9 " << n - 9 :  cout << "4 " << n - 4;
}