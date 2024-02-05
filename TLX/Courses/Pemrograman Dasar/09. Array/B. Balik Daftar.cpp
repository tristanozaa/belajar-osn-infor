#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[105], n = 0;
  while (cin >> arr[n]) {
    n++;
  }
  for (int i = n - 1; i >= 0; i--) {
    cout << arr[i] << endl;
  }
}