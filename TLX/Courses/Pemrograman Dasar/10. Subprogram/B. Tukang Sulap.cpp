#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    
    int t;
    cin >> t;
    char p,q;
    int x,y,temp;
    for (int i = 0; i < t; i++)
    {
        cin >> p >> x >> q >> y;
        temp = p[x]
        p[x] = q[y]
        q[y] = temp
    }
    
    /*
    temp = p[x]
    p[x] = q[y]
    q[y] = temp
    */

    return 0;
}