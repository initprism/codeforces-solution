#include <iostream>

using namespace std;

int main ()
{
  int p, n;

  for(cin >> p; p--;)
  {
    cin >> n; 

    // n = a + b /// a > b /// a > 0, b > 0
    // n: 3, a: 2, b: 1 
    // n: 4, a: 3, b: 1 
    // n: 5, a: 3, 4, b: 2, 1
    // n: 6, a: 4, 5, b: 2, 1
    // n: 7, a: 4, 5, 6, b: 3, 2, 1
    // n: 8, a: 5, 6, 7, b: 3, 2, 1
    // n: 9, a: 5, 6, 7, 8, b: 4, 3, 2, 1
    // 조건 `a > b` 에 의해 a의 값은 a / 2 보다 커야 한다.
    // 조건 `b > 0` 에 의해 b의 값은 최소 1이여야 한다.
    // 조건 `b > 0` 에 의해 b의 값은 최소 1이므로 a의 값은 최대 n-1 이다.
    // length [x| x <- [(a/2 + 1)..n-1] ] === x - (x/2 +1)
    cout << n - (n / 2 + 1) << endl;
  }
}