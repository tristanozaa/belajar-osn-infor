/*
ini merupakan contoh dari penerapan array, link soal permasalahan:
https://tlx.toki.id/courses/basic/chapters/09/problems/D
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = m-1; j >= 0; j--)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
    /*rotasi matriks
    [1][1] -> [1][4]
    [1][2] -> [2][4]
    [1][3] -> [3][4]
    [2][1] -> [1][3]
    */
    system("pause"); 
    return 0;
}