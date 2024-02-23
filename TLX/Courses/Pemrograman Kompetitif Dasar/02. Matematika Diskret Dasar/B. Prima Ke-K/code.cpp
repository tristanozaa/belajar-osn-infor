//
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

bool isPrime(int n) {
  // Corner case
  if (n <= 1)
    return false;

  // Check from 2 to n-1
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;

  return true;
}

void solve() {
  bool prima[10000];
  for (int i = 0; i < 10000; i++) {
    if (isPrime(i) == true) {
      prima[i] = true;
    } else {
      prima[i] = false;
    }
    dbg(prima[i]);
  }
  int t;
  cin >> t;
  int number, temp, ans;
  for (int i = 0; i < t; i++) {
    cin >> number;
    temp = 0;
    for (int j = 3; temp != number; j++) {
      if (prima[j] == true) {
        temp++;
        ans = j;
      }
    }
    cout << ans - 2 << "\n";
  }
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