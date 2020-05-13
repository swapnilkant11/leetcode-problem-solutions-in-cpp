// Given an array of integers and a sum, the task is to count all subsets of given array with sum equal to given sum.
// created by Swapnil Kant
// on 13-05-2020

void printsubsets(int arr[], int n, int sum){
  // declare a temp array to store the results.
  int dp[n + 1][sum + 1];
  memset(dp, 0, sizeof(dp));
  // fill the null subsets.
  for(int i = 0; i < n + 1; i++)
    dp[i][0] = 1;
  // no sum can be formed by null value of given integer.
  for(int i = 1; i < sum + 1; i++)
    dp[0][i] = 0;
  // fill rest of the table.
  for(int i = 1; i < n + 1; i++){
    for(int j = 1; j < sum + 1; j++){
      if(arr[i - 1] < j)
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
    }
  }
  cout<<dp[n][sum]<<endl;
}

// the time complexity of the above algorithm will be of the order n square.
// the space complexity of the above algorithm will be O(n*sum);
