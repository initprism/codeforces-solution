#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  string str;
  cin >> str;

  size_t upcase = 0, lowcase = 0;

  for (const auto& e: str) {
    if (isupper(e)) upcase++;
    else lowcase++;
  }

  if (upcase == lowcase || upcase < lowcase)
    transform(str.begin(), str.end(), str.begin(), ::tolower);
  else
    transform(str.begin(), str.end(), str.begin(), ::toupper);

  cout << str << endl;
}