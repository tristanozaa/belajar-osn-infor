// https://tlx.toki.id/courses/competitive/chapters/01/problems/A
#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back
#define mp make_pair

int t, n, m;
string target, id;
bool lolos;
array<int, 3> a;

void solve() {
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n >> m;
    cin >> target;
    vector<pair<array<int, 3>, string>> v;
    for (int j = 0; j < n; j++) {
      cin >> id >> a[2] >> a[1] >> a[0];
      v.pb(mp(a, id));
    }
    sort(v.rbegin(), v.rend());
    lolos = false;
    for (int j = 0; j < m; j++) {
      if (v[j].second == target) {
        lolos = true;
        break;
      }
    }
    if (lolos == true) {
      cout << "YA\n";
    } else {
      cout << "TIDAK\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}