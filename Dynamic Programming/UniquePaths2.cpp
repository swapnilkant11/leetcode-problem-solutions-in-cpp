// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
// The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (mark
// ed 'Finish' in the diagram below).
// Now consider if some obstacles are added to the grids. How many unique paths would there be?

// created by Swapnil Kant
// on 18-05-2020

int uniquepathswithobatacles(int arr[][], int row, int col){
   // case where the first place is a obatacle.
   if(arr[0][0] == 1)
     return 0;
   // mark the first place as visited.
   arr[0][0] = 1;
   // now start traversing the first row.
   for(int i = 0; i < col; i++){
     if(arr[0][i] == 0 && arr[0][i - 1] == 1)
        arr[0][i] = 1;
   }
   // traverse the first column.
   for(int i = 0; i < row; i++){
      if(arr[i][0] == 0 && arr[i - 1][0] == 1)
        arr[i][0] = 1;
   }
   // now fill rest of the paths.
   for(int i = 1; i < row; i++){
      for(int j = 1; j < col; j++){
         if(arr[i][j] == 0)
           arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
         else
           arr[i][j] = 0;
      }
   }
   return arr[row - 1][col - 1];
}

// the time complexity of the above algorithm is of the order row * col.
// the space complexity of the above algorithm is O(row * col).
