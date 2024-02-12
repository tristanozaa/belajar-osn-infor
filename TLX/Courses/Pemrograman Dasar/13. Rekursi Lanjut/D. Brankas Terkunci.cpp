#include <bits/stdc++.h>
using namespace std;

int n, k, catat[100];

void tulis(int kedalaman) {
  if (kedalaman >= k) {
    for (int i = 0; i < k; i++) {
      cout << catat[i];
      if (i < n - 1) {
        cout << ' ';
      }
    }
    cout << '\n';
  } else {
    for (int i = catat[kedalaman - 1] + 1; i <= n; i++) {
      catat[kedalaman] = i;
      tulis(kedalaman + 1);
    }
  }
}

void solve() {
  cin >> n >> k;
  tulis(0);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}