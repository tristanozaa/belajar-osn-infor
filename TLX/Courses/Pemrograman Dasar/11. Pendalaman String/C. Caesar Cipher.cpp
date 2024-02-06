#include <bits/stdc++.h>
using namespace std;

void solve(string s, int k) {
  while (k > 26) {
    k -= 26;
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] + k > 122) {
      s[i] += k - 26;
    } else {
      s[i] += k;
    }
  }
  cout << s;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  int k;
  cin >> s >> k;
  solve(s, k);
  return 0;
}