#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;                     // menentukan jumlah array
  int m[n], ans[n];             // inisialisasi array
  for (int i = 0; i < n; i++) { // mengisi array
    cin >> m[i];
  }
  for (int i = 0; i < n; i++) {
    ans[i] = 0;
  }

  for (int i = 0; i < n; i++) {          // selektor array
    for (int j = 2; j * j < m[i]; j++) { // cek prima
      if (m[i] == 1) {
        ans[i] = 1;
      }
      if (m[i] % j == 0) {
        ans[i] = 1;
        cout << "BUKAN" << endl;
        break;
      }
    }
    if (ans[i] == 0) {
      cout << "YA" << endl;
    }
  }

  return 0;
}