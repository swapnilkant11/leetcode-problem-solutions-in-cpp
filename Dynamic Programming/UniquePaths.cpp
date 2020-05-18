// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (mark
// ed 'Finish' in the diagram below).
// How many possible unique paths are there?

// created by Swapnil Kant
// on 17-05-2020

int uniquepaths(int row, int col){
  if(n == 0 && m == 0)
     return 0;
  // allocate space to store the paths.
  int paths[row + 1][col + 1];
  // initialize all paths initially untraversed.
  for(int i = 0; i < row; i++){
     for(int j = 0; j < col; j++)
        paths[i][j] = 0;
  }
  // now mark the first place as traversed.
  paths[0][0] = 1;
  // marks the first row as traversed.
  for(int i = 1; i < col; i++)
    if(paths[0][i] == 0 && paths[0][i - 1] == 1)
       paths[0][i] = 1;
  }
  // similarly do for the first col.
  for(int i = 0; i < row; i++)
    if(paths[i][0] == 0 && paths[i - 1][0] == 1)
       paths[i][0] = 1;
  }
  // now traverse the paths and keep marking it.
  for(int i = 1; i < row; i++){
     for(int j = 1; j < col; j++)
        paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
  }
  return paths[row - 1][col - 1]
}

// the time complexity of the above algorithm will be of order row * col.
// the space complexity of the above algorithm will be of the order O(row*col).
