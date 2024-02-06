#include <bits/stdc++.h>
using namespace std;

void solve(string s[]) {
  s[0].erase(s[0].find(s[1]), s[1].length());
  s[0].insert(s[0].find(s[2]) + s[2].length(), s[3]);
  cout << s[0];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s[4];
  for (int i = 0; i < 4; i++) {
    cin >> s[i];
  }
  solve(s);
  return 0;
}