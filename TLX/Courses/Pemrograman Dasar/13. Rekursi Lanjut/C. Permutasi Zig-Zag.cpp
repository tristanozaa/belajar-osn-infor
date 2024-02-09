#include <bits/stdc++.h>
using namespace std;

int n, c[9];
bool pernah[9];

void zz(int k) {
  if (k >= n) {
    for (int i = 1; i < k - 1; i++) {
      if ((c[i] > c[i - 1] && c[i] < c[i + 1]) ||
          (c[i] < c[i - 1] && c[i] > c[i + 1])) {
        return;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << c[i];
    }
    cout << '\n';
  } else {
    for (int i = 1; i <= n; i++) {
      if (!pernah[i]) {
        pernah[i] = true;
        c[k] = i;
        zz(k + 1);
        pernah[i] = false;
      }
    }
  }
}

void solve() {
  cin >> n;
  memset(pernah, false, sizeof(pernah));
  zz(0);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}