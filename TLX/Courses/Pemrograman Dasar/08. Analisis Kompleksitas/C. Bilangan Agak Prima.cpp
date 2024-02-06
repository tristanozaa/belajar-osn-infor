#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int x = 0;
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        x++;
      }
    }
    if (x <= 1) {
      cout << "YA" << '\n';
    } else {
      cout << "BUKAN" << '\n';
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}