// Given a binary matrix A, we want to flip the image horizontally, then invert it, and return the resulting image.
// To flip an image horizontally means that each row of the image is reversed.  For example, flipping [1, 1, 0] horizontally results in [0, 
// 1, 1].
// To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].

// created by Swapnil Kant
// on 17-05-2020

vector<int> flipplinanimage(vector<vector<int>>& arr){
  // get the size.
  int row = arr.size();
  int col = arr[0].size();
  // reverse the rows.
  for(int i = 0; i < row; i++){
     for(int j = 0, int k = C - 1; j < k; j++, k--)
        swap(arr[i][j], arr[i][k]);
  }
  // swap 0 to 1 and vice versa.
  for(int i = 0; i < row; i++){
     for(int j = 0; j < col; j++){
        if(arr[i][j] == 1)
          arr[i][j] = 0;
        else
          arr[i][j] = 1;
     }
  }
  return arr;
}

// the time complexity of the above algorithm is O(row*col).
// the space complexity of the aove algorithm is O(row*col).
