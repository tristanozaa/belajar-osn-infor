#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (((n-x)+((m-y)*2))>25) {
        cout << "LOLOS";
    }
    else {cout << "TIDAK LOLOS";}
}