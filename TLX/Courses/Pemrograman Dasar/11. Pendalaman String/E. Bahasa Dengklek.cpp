#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] > 90) {
      s[i] -= 'a' - 'A';
    } else {
      s[i] += 'a' - 'A';
    }
  }
  cout << s;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  solve(s);
  return 0;
}