#include <bits/stdc++.h>
using namespace std;

void solve(int x, string S, string T) {
  while (S.find(T) != -1) {
    S.erase(S.find(T), x);
  }
  cout << S;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string S, T;
  cin >> S >> T;
  solve(S.length(), S, T);
  return 0;
}