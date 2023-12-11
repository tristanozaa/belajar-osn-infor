#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, h=INT_MIN, l=INT_MAX;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > h) {h = x;}
        if (x < l) {l = x;}
    }
    cout << h << " " << l;
    return 0;
}