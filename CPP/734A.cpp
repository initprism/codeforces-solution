#include <iostream>

using namespace std;

int anton, danik;

int main () {
  int n;  
  cin >> n;

  char w;
  while(cin >> w) 
  {
    if (w == 'A') anton++;
    else          danik++;
  }

  if (anton > danik)      cout << "Anton" << endl;
  else if (anton < danik) cout << "Danik" << endl;
  else                    cout << "Friendship" << endl;
}