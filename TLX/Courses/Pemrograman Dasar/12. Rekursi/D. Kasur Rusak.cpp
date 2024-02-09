#include <bits/stdc++.h>
using namespace std;

bool cek(int a, int b, string s) {
  if (a == b || a > b) {
    return true;
  }
  if (s[a] != s[b]) {
    return false;
  }
  return cek(a + 1, b - 1, s);
}

void solve() {
  string s;
  cin >> s;
  bool palindrom = cek(0, s.length() - 1, s);
  if (palindrom == true) {
    cout << "YA";
  } else {
    cout << "BUKAN";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}