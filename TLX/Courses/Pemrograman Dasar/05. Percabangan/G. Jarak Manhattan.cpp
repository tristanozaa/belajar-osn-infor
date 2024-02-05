#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2, sx, sy;
  cin >> x1 >> y1 >> x2 >> y2;
  sx = x1 - x2;
  sy = y1 - y2;

  if (sx < 0) {
    sx = -sx;
  }
  if (sy < 0) {
    sy = -sy;
  }

  cout << sx + sy;

  return 0;
}