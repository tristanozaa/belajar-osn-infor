#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (m == 10) {m = 0;}
            cout << m;
            m++;
        }
        cout << endl;
    }
    

    return 0;
}