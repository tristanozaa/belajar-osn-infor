#include <bits/stdc++.h>
using namespace std;

int main() {
  float n;
  int f, c;
  cin >> n;
  if (n == trunc(n)) {
    f = trunc(n);
    cout << f << " " << f;
  } else if (n > 0) {
    f = trunc(n);
    c = trunc(n) + 1;
    cout << f << " " << c;
  } else {
    f = trunc(n) - 1;
    c = trunc(n);
    cout << f << " " << c;
  }
  return 0;
}