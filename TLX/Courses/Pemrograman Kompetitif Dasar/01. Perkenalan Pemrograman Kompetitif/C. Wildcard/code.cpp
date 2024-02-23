// https://tlx.toki.id/courses/competitive/chapters/01/problems/C/submissions/1768584
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(v)                                                                 \
  cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#endif

void solve() {
  string s, dpn, blkg;
  cin >> s;
  int t;
  cin >> t;
  int star = s.find('*');
  dpn = s.substr(0, star);
  blkg = s.substr(star + 1);
  string word;
  for (int i = 0; i < t; i++) {
    cin >> word;
    if (word.length() < s.length() - 1) {
      continue;
    } else {
      string depan = word.substr(0, star);
      string belakang =
          word.substr(word.length() - blkg.length(), blkg.length());
      if (depan == dpn && belakang == blkg) {
        cout << word << "\n";
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