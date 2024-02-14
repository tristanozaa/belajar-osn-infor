#include <bits/stdc++.h>
using namespace std;

int n, r, c, rr, cc;
vector<string> qt;
bool arr[128][128];

void rekursi(int indeks, int kedalaman, int row, int col, int k) {
  if (kedalaman == qt[indeks].length()) {
    for (int x = row; x < row + k; x++) {
      for (int y = col; y < col + k; y++) {
        arr[x][y] = true;
      }
    }
  } else {
    if (qt[indeks][kedalaman] == '0') {
      rekursi(indeks, kedalaman + 1, row, col, k / 2);
    }
    if (qt[indeks][kedalaman] == '1') {
      rekursi(indeks, kedalaman + 1, row, col + (k / 2), k / 2);
    }
    if (qt[indeks][kedalaman] == '2') {
      rekursi(indeks, kedalaman + 1, row + (k / 2), col, k / 2);
    }
    if (qt[indeks][kedalaman] == '3') {
      rekursi(indeks, kedalaman + 1, row + (k / 2), col + (k / 2), k / 2);
    }
  }
}

void solve() {
  cin >> n;
  qt.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> qt[i];
  }
  cin >> r >> c;
  rr = r;
  cc = c;
  int maxRc = max(r, c);
  int pow2 = 1;
  while (pow2 < maxRc) {
    pow2 *= 2;
  }
  for (int i = 0; i < 128; i++) {
    for (int j = 0; j < 128; j++) {
      arr[i][j] = false;
    }
  }
  for (int i = 0; i < n; i++) {
    rekursi(i, 1, rr, cc, pow2);
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr[i][j] << ' ';
    }
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}