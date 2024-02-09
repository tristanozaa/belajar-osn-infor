#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
  if (n == 1) {
    return 1;
  } else if (n % 2 == 0) {
    return (n / 2) * fib(n - 1);
  } else {
    return n * fib(n - 1);
  }
}

int main() {
  int n;
  cin >> n;
  cout << fib(n);

  return 0;
}