// https://tlx.toki.id/courses/competitive/chapters/02/problems/B
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

void solve() {
  int n = 989999;
  vector<bool> is_prime(n + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
      for (int j = i * i; j <= n; j += i)
        is_prime[j] = false; // sieve ini hanya mengecek apakah bilangan
                             // tersebut prima atau tidak, kita harus mengubah
                             // ini menjadi urutan bilangan prima.
    }
  }
  int t;
  cin >> t;
  vector<int> prima_ke(t);
  for (int i = 0; i < t; i++) {
    cin >> prima_ke[i]; // input prima berapa yang dicari
  }
  int limit = *max_element(prima_ke.begin(),
                           prima_ke.end()); // kenapa cari angka terbesar?

  vector<int> urutan_prima(
      limit); // membuat vector berisi urutan prima dari 1 s.d limit. jadi nanti
              // tinggal diakses aja indeksnya
  int last_number = 2;
  for (int i = 0; i < limit; i++) {
    while (true) {
      if (is_prime[last_number] == true) {
        urutan_prima[i] =
            last_number; // mengisi vektor dengan urutan
                         // bilangan prima (didapat dari last_number)
        last_number++;
        break;
      } else {
        last_number++;
      }
    }
  }
  for (int i = 0; i < t; i++) {
    cout << urutan_prima[(prima_ke[i] - 1)] << "\n";
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