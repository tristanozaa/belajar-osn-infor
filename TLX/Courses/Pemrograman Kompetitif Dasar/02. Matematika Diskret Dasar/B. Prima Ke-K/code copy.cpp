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
  int t, count = 0, temp = 0;
  cin >> t;
  int n[t];
  for (int i = 0; i < t; i++) {
    cin >> n[i];
  }
  for (int i = 0; i < t; i++) { // mencoba tiap isi array
    count = 0;
    for (int j = 2; count != n[i]; j++) {
      if (isPrime(j) == true) {
        count++;
        temp = j;
      }
    }
    cout << temp << "\n";
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