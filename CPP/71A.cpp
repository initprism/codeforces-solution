#include <iostream>
#include <string>
#include <vector>

using namespace std;
string solve(string);

int main() {
  size_t n;
  cin >> n;

  vector<string> words;
  for (size_t i=0; i < n; i++) {
    string s;
    cin >> s;

    words.push_back(s);
  }

  for (string word: words) {
    string result = solve(word);
    cout << result << endl;
  }
}

string solve(string s) {
  size_t size = s.size();

  if(size > 10) 
    return s[0] + to_string(size - 2) + s[size -1];
  else
    return s;
}