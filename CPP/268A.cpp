#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
  int n, p, q, r = {0};
  vector<pair<int, int>> xs;

  for(cin >> n; n--; xs.push_back({p, q})) cin >> p >> q;
  
  for(int i = 0; i < xs.size(); ++i)
    for(int j = i + 1; j < xs.size(); ++j)
    {
      xs[i].first == xs[j].second ? r++ : 0;
      xs[i].second == xs[j].first ? r++ : 0;
    }

  cout << r << endl;
}