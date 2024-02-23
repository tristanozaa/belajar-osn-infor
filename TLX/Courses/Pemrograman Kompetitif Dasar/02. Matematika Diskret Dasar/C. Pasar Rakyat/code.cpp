// https://tlx.toki.id/courses/competitive/chapters/02/problems/C
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

void solve() {
  int t;
  cin >> t;
  int n, ans = 1;
  for (int i = 0; i < t; i++) {
    cin >> n;
    ans = lcm(ans, n);
  }
  cout << ans;
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