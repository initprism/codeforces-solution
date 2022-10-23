#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n, k, result = 0;
  cin >> n >> k;
  cin.ignore();

  string s;
  size_t i;
  vector<size_t> xs;
  getline(cin, s);

  istringstream iss(s);
  while(iss >> i) xs.push_back(i);

  for(size_t x: xs)
  {
    if (x != 0 && x >= xs[k - 1])
    {
      result++;
    }
  }
  cout << result << endl;
}