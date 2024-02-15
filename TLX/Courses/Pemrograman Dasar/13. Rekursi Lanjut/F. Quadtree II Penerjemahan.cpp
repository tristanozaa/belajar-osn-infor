#include <bits/stdc++.h>
using namespace std;

int matrix[128][128];
int r, c, n;
string code[128 * 128];

bool ispowertwo(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

void changeto1(int r, int c, int size, string kode) {
  if (kode.length() == 0) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        matrix[i][j] = 1;
      }
    }
    return;
  } else if (kode.length() == 1) {
    if (kode == "0") {
      for (int i = r; i < (r + (size >> 1)); i++) {
        for (int j = c; j < (c + (size >> 1)); j++) {
          matrix[i][j] = 1;
        }
      }
    } else if (kode == "1") {
      for (int i = r; i < (r + (size >> 1)); i++) {
      }
    }
  }
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> code[i];
  }
  cin >> r >> c;
  int rtemp = r, ctemp = c;
  if (!(ispowertwo(r) && ispowertwo(c))) {
    while (!ispowertwo(rtemp)) {
      rtemp++;
    }
    while (!ispowertwo(ctemp)) {
      ctemp++;
    }
  }
  rtemp = (ctemp > rtemp) ? ctemp : rtemp;
  ctemp = rtemp;
  for (int i = 0; i < rtemp; i++) {
    for (int j = 0; j < ctemp; j++) {
      matrix[i][j];
    }
  }
  if (n != 0) {
    for (int i = 0; i < n; i++) {
      code[i].erase(code[i].begin());
      changeto1(0, 0, rtemp, code[i]);
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << matrix[i][j];
      if (j == c - 1) {
        cout << '\n';
      } else {
        cout << ' ';
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}