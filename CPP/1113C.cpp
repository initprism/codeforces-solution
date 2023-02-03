#include <iostream>

using namespace std;

int dp[2][(1 << 20) + 3];

int main () {
  int n, a, i {}, x {};
  long long res {};
  dp[1][0] = 1;

  for(cin >> n; n--; i++) 
  {
    cin >> a; 
    x ^= a;
    res += dp[i % 2][x];
    dp[i % 2][x]++;
  }
  cout << res << endl;
}