#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n; // meentukan ukuran input
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i]; // bagian input
  }

  int counter[1001]; // untuk menghitung jumlah angka muncul berapa kali
  for (int i = 0; i < 1001; i++) {
    counter[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    counter[arr[i]]++;
  }

  /*anggap nomor array itu angka yang dimaksud, dan nilai di dalamnya
  adalah berapa kali angka itu muncul*/

  int hasil = 0;
  for (int i = 1; i < 1001; i++) {
    if (counter[i] >= counter[hasil]) {
      hasil = i;
    }
  }

  cout << hasil;
  return 0;
}