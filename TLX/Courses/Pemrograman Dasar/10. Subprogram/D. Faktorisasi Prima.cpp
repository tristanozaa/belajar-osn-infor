#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 2; i <= n; i++) {
    int a = 0;
    while (n % i == 0) {
      n /= i;
      a++;
    }
    if (a > 1) {
      cout << i << "^" << a;
      if (i < n) {
        cout << " x ";
      }
    }
    if (a == 1) {
      cout << i;
      if (i < n) {
        cout << " x ";
      }
    }
  }

  return 0;
}