#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<size_t> g(size_t n) {
  // 4 3 2 3 4 3 2 1 2 3 2 1 0 1 2 3 2 1 2 3 4 3 2 3 4  ...
  vector<size_t> v;

  for(int i = 0; i < n*n; i++)
    v.push_back(abs(i / 5 - 2) + abs(i % 5 - 2));

  return v;
}

int main() {
  vector<size_t> xs = g(5);
  vector<size_t> ix;

  size_t result = 0;

  for (int i = 0; i < 25; i++) {
    size_t n;
    cin >> n; 

    if (n == 1) { 
      result = xs[i];
    }
  }

  cout << result << endl;
}
