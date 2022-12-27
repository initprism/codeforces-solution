#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  int t, n;

  for(cin >> t; t--;)
  {
    vector<int> v;
    int m = 10; cin >> n;

    for (; n;)
    {
      int r = n % m;
      if(r) v.push_back(r), n -= r; 
      m*= 10;
    }

    cout << v.size() << endl;
    for(const auto& e: v) cout << e << " ";
  }
}