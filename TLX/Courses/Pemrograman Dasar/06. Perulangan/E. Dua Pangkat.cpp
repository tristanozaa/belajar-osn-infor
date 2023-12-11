#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, y=0, m=2;
    cin >> n;
    while (n%2==0) {n/=2;}
    if (n==1) {cout << "ya";}
    else {cout << "bukan";}
    return 0;
}