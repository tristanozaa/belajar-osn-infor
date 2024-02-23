// https://tlx.toki.id/courses/competitive/chapters/03/problems/A
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

int n, x, terkecil = INT_MAX, ans;

void solve() {
  cin >> n >> x;
  int kupon[n];
  for (int i = 0; i < n; i++) {
    cin >> kupon[i];
    if (abs(kupon[i] - x) < terkecil) {
      terkecil = abs(kupon[i] - x);
      ans = kupon[i];
    }
    if (abs(kupon[i] - x) == terkecil) {
      ans = min(kupon[i], ans);
    }
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