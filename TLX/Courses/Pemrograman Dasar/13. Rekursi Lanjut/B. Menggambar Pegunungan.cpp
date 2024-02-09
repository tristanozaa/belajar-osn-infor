#include <bits/stdc++.h>
using namespace std;

void gunung(int n) {
  if (n == 1) {
    cout << '*' << '\n';
  } else {
    gunung(n - 1);
    for (int i = 0; i < n; i++) {
      cout << '*';
    }
    cout << '\n';
    gunung(n - 1);
  }
}

void solve() {
  int n;
  cin >> n;
  gunung(n);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}