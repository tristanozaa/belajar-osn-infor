#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a = n / m;
    int b = n % m;

    cout << "masing-masing " << a << endl;
    cout << "bersisa " << b;
}