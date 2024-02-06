#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
  if (s.find('_') != -1) {
    while (s.find('_') != -1) {
      int index = s.find('_');
      s.erase(index, 1);
      s[index] -= 'a' - 'A';
    }
  } else {
    for (int i = 0; i < s.length(); i++) {
      if (s[i] < 'a') {
        s[i] += 'a' - 'A';
        s.insert(i, 1, '_');
      }
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