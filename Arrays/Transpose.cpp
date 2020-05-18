// Given a matrix A, return the transpose of A.
// The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

// created by Swapnil Kant
// on 18-05-2020

vector<vector<int>> transpose(vector<vector<int>>& A) {
  int i, j;
  int R = A.size();
  int C = A[0].size();
  // interchange the row by col and col by row in the new matrix.
  vector<vector<int>> B(C, vector<int>(R));
  for(i = 0; i < R; i++){
   for(j = 0; j < C; j++)
    B[j][i] = A[i][j];
  }
  return B;
}

// the time complexity of the above algorithm will be of the order row * col.
// the space complexity of the above algorithm will be O(row * col).
