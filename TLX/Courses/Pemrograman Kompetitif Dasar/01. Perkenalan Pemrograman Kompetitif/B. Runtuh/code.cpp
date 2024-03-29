//
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

int r, c;
vector<vector<bool>> v;
string s;

// coba pakai vector of strings

void solve() {
  cin >> r >> c;
  v.resize(r, vector<bool>(c));
  for (int i = 0; i < r; i++) {
    cin >> s;
    for (int j = 0; j < c; j++) {
      if (s[j] == 0) {
        v[i][j] = 0;
      } else {
        v[i][j] = 1;
      }
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      dbg(v[i][j]);
    }
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