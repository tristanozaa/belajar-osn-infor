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
    char P, x, Q, y;
    for (int i = 0; i < t; i++) {
        cin >> P >> x >> Q >> y;
      if (P == 'A' && Q == 'A' ) {
      }
      if (P == 'A' && Q == 'B' ) {
      }
      if (P == 'B' && Q == 'A' ) {
      }
      if (P == 'B' && Q == 'B' ) {
      }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << B[i];
    }
   
   

    return 0;
}