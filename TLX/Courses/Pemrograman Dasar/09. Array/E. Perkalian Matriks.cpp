#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    
    int a[n][m], b[m][p], ans[n][p];
    for (int i = 0; i < n; i++) // input matriks a
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }
    for (int i = 0; i < m; i++) // input matriks b
    {
        for (int j = 0; j < p; j++)
        {
            cin >> b[i][j];
            ans[i][j] = 0;
        }
        
    }

    for (int i = 0; i < n; i++) // perhitungan kalkulasi
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                for (int l = 0; l < m; l++)
                {
                    ans[n][p] += a[k][m]*b[m][k];
                }
                
            }
            
        }
        
    }
    for (int i = 0; i < m; i++) // output jawaban
    {
        for (int j = 0; j < p; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}