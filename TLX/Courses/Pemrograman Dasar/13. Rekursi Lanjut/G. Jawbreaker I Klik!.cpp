#include <bits/stdc++.h>
using namespace std;

int m, n;
vector<vector<int>> arr;
vector<vector<bool>> vist;
int x, y;
int counter = 0;

void klik(int x, int y, int c) {
  if (x >= 0 && x <= m - 1 && y >= 0 && y <= n - 1) {
    if (vist[x][y] == 0) {
      vist[x][y] = 1;
      if (arr[x][y] == c) {
        counter++;
        klik(x + 1, y, c);
        klik(x - 1, y, c);
        klik(x, y + 1, c);
        klik(x, y - 1, c);
      }
    }
  }
}

void solve() {
  cin >> m >> n;
  arr.resize(m, vector<int>(n));
  vist.resize(m, vector<bool>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
      vist[i][j] = 0;
    }
  }
  cin >> x >> y;
  klik(x, y, arr[x][y]);
  cout << counter * (counter - 1);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}