#include <iostream>
#include <algorithm>

using namespace std;

const int CAPACITY = 200005;

// n -- to prepare portion
// m -- numebr of first spell
// k -- number of second spell
// x -- initial number of second s require to prepare one portion
// s -- number of manapoints can use
long long int n, m, k, x, s;

// a_ms -- number of seconds it will take to prepare one portion first type spell 
// a_mp -- number of manapoints to use i-th spell  of the first type
// a_ks -- number of portion taht will be immediately created
// a_kp -- number of manapoints to use i-th spell of the second type
long long int a_ms[CAPACITY], a_mp[CAPACITY], a_ks[CAPACITY], a_kp[CAPACITY];

int main () 
{
  cin >> n >> m >> k >> x >> s;

  for(int i = 0; i < m; i++) cin >> a_ms[i];
  for(int i = 0; i < m; i++) cin >> a_mp[i];
  for(int i = 0; i < k; i++) cin >> a_ks[i];
  for(int i = 0; i < k; i++) cin >> a_kp[i];

  long long int rest = (n - a_ks[upper_bound(a_kp, a_kp + k, s) - a_kp - 1]) * x;
  
  for (int i = 0; i < m; ++i)
    if (a_mp[i] <= s)  
      rest = min(rest, (n - a_ks[upper_bound(a_kp, a_kp + k, s - a_mp[i]) - a_kp - 1]) * a_ms[i]);

  cout << rest << endl;
}