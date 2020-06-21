//We have a two dimensional matrix A where each value is 0 or 1.
// A move consists of choosing any row or column, and toggling each value in that row or column: changing all 0s to 1s, and all 1s to 0s.
//After making any number of moves, every row of this matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.
// Return the highest possible score.

https://leetcode.com/problems/score-after-flipping-matrix/

// created by Swapnil Kant
// on 21-06-2020

int filpmatrix(vector<vector<int>>& A){
  // get the row and col;
  int row = A.size();
  int col = A[0].size();
  int colcount = 0;
  int ans = 0;
  // traverse the matrix.
  for(int i = 0; i < col; i++){
    colcount = 0;
    for(int j = 0; j < row; j++){
       colcount = A[j][i] ^ A[j][0];
    }
    ans += max(colcount, row - colcount) * (1<<col-i-1);
  }
  return ans;
}

// the time complexity of the above algorithm will be of th order n square.
// the space complexity of the above algorithm will be O(1).
