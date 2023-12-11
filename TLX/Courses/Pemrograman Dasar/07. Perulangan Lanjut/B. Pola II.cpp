#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m=n-1, temp=1;

    for (int i = 1; i <= n; i++) // baris 1 sampai n
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    

    return 0;
}