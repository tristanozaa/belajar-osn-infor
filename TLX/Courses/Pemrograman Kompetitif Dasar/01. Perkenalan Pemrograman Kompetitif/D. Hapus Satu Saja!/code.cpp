// https://tlx.toki.id/courses/competitive/chapters/01/problems/D
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

string a, b;
int i = 0, j = 0;

void solve() {
  cin >> a;
  cin >> b;
  if (a.length() == b.length() + 1) {
    while (i < a.length() && j <= b.length()) {
      if (a[i] == b[j]) {
        j++;
      }
      i++;
    }
    if (i == j + 1) {
      cout << "Tentu saja bisa!";
    } else {
      cout << "Wah, tidak bisa :(";
    }
  } else {
    cout << "Wah, tidak bisa :(";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  solve();
  return 0;
}