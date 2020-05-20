// Given a m * n matrix of ones and zeros, return how many square submatrices have all ones.
// created by Swapnil Kant 
// on 20-05-2020

int countonesinsubmatrices(vector<vector<int>> matrix){
   int n = matrix.size();
   int m = matrix[0].size();
   // now we will use no extra space here.
   for(int i = 1; i < n; i++){
     for(int j = 1; j < m; j++){
       if(matrix[i][j] == 0)
          continue;
       else
          matrix[i][j] = min(matrix[i - 1][j - 1], min(matrix[i - 1][j], matrix[i][j - 1])) + 1;
     }
   }
   // now calculate all squares denoted by 1.
   int count = 0;
   for(int i = 0; i < n; i++){
     for(int j = 0; j < m; j++)
        count += matrix[i][j];
     }
   }
   return count;
}

// the time complexity of the above algorithm is of the order n square.
// the space complexity of the above algorithm is O(1).
