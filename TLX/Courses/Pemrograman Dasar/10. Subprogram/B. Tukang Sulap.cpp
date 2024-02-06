#include <bits/stdc++.h>
using namespace std;

int n, x, y, t, A[1005], B[1005];

void solve(char P, int x, char Q, int y) {
  if (P == 'A' && Q == 'A') {
    swap(A[x - 1], A[y - 1]);
  } else if (P == 'A' && Q == 'B') {
    swap(A[x - 1], B[y - 1]);
  } else if (P == 'B' && Q == 'A') {
    swap(B[x - 1], A[y - 1]);
  } else if (P == 'B' && Q == 'B') {
    swap(B[x - 1], B[y - 1]);
  } else {
    return;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> B[i];
  }

  cin >> t;
  char P, Q;
  while (t--) {
    cin >> P >> x >> Q >> y;
    solve(P, x, Q, y);
  }

  for (int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  cout << "\n";
  for (int i = 0; i < n; i++) {
    cout << B[i] << " ";
  }

  return 0;
}