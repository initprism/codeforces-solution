#include <iostream>
#include <sstream>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

bool solve(vector<size_t>);

int main() {
  int result = 0;
  size_t n;
  cin >> n;
  cin.ignore();

  for(size_t i = 0; i < n; i++) 
  {
    string s;
    size_t x; 
    vector<size_t> xs;

    getline(cin, s);
    istringstream iss(s);
    while(iss >> x) xs.push_back(x);

    if (solve(xs)) result += 1;
  }

  cout << result << endl;
}

bool solve(vector<size_t> xs) {
  // C++17 and above
  // auto result = std::reduce(xs.begin(), xs.end());
  // return result >= 2;

  return accumulate(xs.begin(), xs.end(), 0) >= 2;
}