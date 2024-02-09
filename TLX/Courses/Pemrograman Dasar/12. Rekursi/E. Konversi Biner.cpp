#include <bits/stdc++.h>
using namespace std;

string biner(int N) {
  if (N == 1) {
    return "1";
  } else if (N % 2 == 1) {
    return biner(N / 2) + "1";
  } else {
    return biner(N / 2) + "0";
  }
}

void solve() {
  int n;
  cin >> n;
  cout << biner(n);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}