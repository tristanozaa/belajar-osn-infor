// https://tlx.toki.id/courses/competitive/chapters/02/problems/A/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

void solve() {
  ll a, b, c, d, e, f, h;
  cin >> a >> b >> c >> d;
  f = b * d / gcd(b, d);
  e = f / b * a + f / d * c;
  h = gcd(e, f);
  cout << e / h << " " << f / h;
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