#include <iostream>
#include <string>

using namespace std;

int main() {
  int result = 0; 

  size_t n;
  cin >> n;


  for(size_t i = 0; i < n; i++) {
    string temp;
    cin >> temp;

    if(temp[1] == '+') result++;
    else result--;
  }

  cout << result;
}