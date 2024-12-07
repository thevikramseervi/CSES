#include <iostream>
 
using namespace std;
 
int main() {
  string s;
  cin >> s;
 
  int n = s.size();
  int best = 1;
 
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    while (s[i + 1] == s[i]) {
      cnt++;
      i++;
    }
    best = (best > cnt) ? best : cnt;
  }
 
  cout << best << "\n";
  return 0;
}