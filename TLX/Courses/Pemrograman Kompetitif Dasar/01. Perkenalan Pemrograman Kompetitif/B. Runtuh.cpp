// https://tlx.toki.id/courses/competitive/chapters/01/problems/B
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define f first
#define s second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int r, c;
vector<vector<int>> v;
int isi;
vector<bool> status;

bool penuh(int i) {
  rep(j, c) {
    if (v[i][j] == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  cin >> r >> c;
  v.resize(r, vector<int>(c));
  rep(i, r) {
    rep(j, c) {
      cin >> isi; // gabisa langsung ganti value
      v[i][j] = isi;
    }
  }
  status.resize(r);
  rep(i, r) {
    rep(j, c) {
      cin >> isi; // gabisa langsung ganti value
      v[i][j] = isi;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}