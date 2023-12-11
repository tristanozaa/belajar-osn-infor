#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, sum = 0;
    while (!cin.eof())
    {
        sum += n;
        cin >> n;
    }
    cout << sum;
    return 0;
}