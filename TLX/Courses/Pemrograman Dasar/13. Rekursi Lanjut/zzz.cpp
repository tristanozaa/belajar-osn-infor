#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

// Struktur untuk merepresentasikan quadtree node
struct QuadTreeNode {
  char value;

  QuadTreeNode(char val) : value(val) {}
};

// Fungsi untuk membangun quadtree dari input
QuadTreeNode buildQuadTree(vector<string> &codes, int &index) {
  char code = codes[index++];
  if (code == '1' || code == '0') {
    return QuadTreeNode(code);
  }

  QuadTreeNode node('Q');
  node.value = 'Q';
  node.value = buildQuadTree(codes, index).value;
  node.value = buildQuadTree(codes, index).value;
  node.value = buildQuadTree(codes, index).value;
  node.value = buildQuadTree(codes, index).value;

  return node;
}

// Fungsi untuk mengisi matriks berdasarkan quadtree
void fillMatrix(QuadTreeNode root, vector<vector<char>> &matrix, int row,
                int col, int size) {
  if (root.value == '1' || root.value == '0') {
    for (int i = row; i < row + size; ++i) {
      for (int j = col; j < col + size; ++j) {
        matrix[i][j] = root.value;
      }
    }
    return;
  }

  int newSize = size / 2;
  fillMatrix(root, matrix, row, col, newSize);
  fillMatrix(root, matrix, row, col + newSize, newSize);
  fillMatrix(root, matrix, row + newSize, col, newSize);
  fillMatrix(root, matrix, row + newSize, col + newSize, newSize);
}

int main() {
  int N, R, C;
  cin >> N;

  vector<string> codes;
  for (int i = 0; i < N; ++i) {
    string code;
    cin >> code;
    codes.push_back(code);
  }

  cin >> R >> C;

  // Membuat matriks berukuran 2^P x 2^P dengan P sekecil mungkin
  int P = max(R, C);
  while ((1 << P) < max(R, C)) {
    P++;
  }

  vector<vector<char>> matrix(1 << P, vector<char>(1 << P, '0'));

  // Membangun quadtree dari input
  int index = 0;
  QuadTreeNode root = buildQuadTree(codes, index);

  // Mengisi matriks berdasarkan quadtree
  fillMatrix(root, matrix, 0, 0, 1 << P);

  // Menampilkan matriks hasil
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}