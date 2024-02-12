#include <bits/stdc++.h>
using namespace std;

int r, c;
vector<vector<int>> v;

void quadtree() { if () }

void solve() {
  cin >> r >> c;
  v.resize(r, vector<int>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> v[i][j];
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << v[i][j] << ' ';
    }
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}