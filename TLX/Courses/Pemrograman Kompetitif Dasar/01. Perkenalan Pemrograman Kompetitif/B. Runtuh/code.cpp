//
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

int r, c;

void solve() {
  cin >> r >> c;
  char tetris[r][c];
  string input[r];
  for (int i = 0; i < r; i++) {
    cin >> input[i];
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      tetris[i][j] = input[i][j];
      cout << tetris[i][j];
    }
    cout << "\n";
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