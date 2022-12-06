#include <iostream>
#include <string>

using namespace std;

int main ()
{
  size_t n;
  cin >> n;

  cout << "I hate ";
  for(size_t i = 1; i < n; ++i)
    cout << (i & 1 ? "that I love " :  "that I hate ");

  cout << "it";
}