#include <bits/stdc++.h>
using namespace std;

int tingkat(int x1, int x2, int y1, int y2, int d) {
  return pow(abs(x2 - x1), d) + pow(abs(y2 - y1), d);
}

int main() {
  int n, d;
  int h = INT_MIN, l = INT_MAX;
  cin >> n >> d;
  int x[n], y[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      } else {
        if (tingkat(x[i], x[j], y[i], y[j], d) > h) {
          h = tingkat(x[i], x[j], y[i], y[j], d);
        }
        if (tingkat(x[i], x[j], y[i], y[j], d) < l) {
          l = tingkat(x[i], x[j], y[i], y[j], d);
        }
      }
    }
  }
  cout << l << " " << h;

  return 0;
}