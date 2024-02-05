/*
ini merupakan contoh dari penerapan fungsi, link soal permasalahan:
https://tlx.toki.id/courses/basic/chapters/10/problems/C
*/

#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
  int temp = x;
  int ret = 0;

  while (temp > 0) {
    ret = (ret * 10) + (temp % 10);
    temp = temp / 10;
  }

  return ret;
}

/*
penjelasan cara kerja fungsi reverse() diatas:
https://www.youtube.com/watch?v=8uI6hKp3jYs&t=467s
*/

int main() {
  int a, b;
  cin >> a >> b;
  cout << reverse(reverse(a) + reverse(b));
  return 0;
}