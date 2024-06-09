// https://tlx.toki.id/courses/competitive/chapters/01/problems/B
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

int r, c;

void solve() {
  cin >> r >> c;
  char tetris[r][c];
  string input[r];
  for (int i = 0; i < r; i++) {
    cin >> input[i]; // menerima input berupa string
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      tetris[i][j] = input[i][j]; // mengubah string menjadi char
    }
  }

  bool beres = false;
  while (beres != true) {
    beres = true;
    bool hilangkan;
    int baris_terakhir;
    for (int i = 0; i < r; i++) {
      hilangkan = true;
      for (int j = 0; j < c; j++) {
        if (tetris[i][j] == '0') {
          hilangkan = false; // mendeteksi adanya kotak kosong
        }
      }
      if (hilangkan ==
          true) { // jika satu baris terisi penuh akan menghilangkan baris tsb
        baris_terakhir = i;
        beres = false;
        for (int j = 0; j < c; j++) {
          tetris[i][j] = '0';
        }
      }
    }

    int baris_kosong;
    for (int i = baris_terakhir; i >= 0;
         i--) { // deteksi kotak terisi dari titik mulai gravitasi
      for (int j = 0; j < c; j++) { // scan kolom
        if (tetris[i][j] == '1') {
          for (int k = i + 1; k < r; k++) {
            if (tetris[k][j] ==
                '0') { // jika mendapatkan kotak berisi maka akan scan kebawah
                       // mencari kotak terisi, lalu swap dengan
                       // (kotak_terisi-1)
              baris_kosong = k;
            } else {
              break;
            }
          }
          swap(tetris[i][j], tetris[baris_kosong][j]);
        }
      }
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << tetris[i][j];
    }
    cout << "\n";
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