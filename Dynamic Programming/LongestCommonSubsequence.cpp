// Given two strings text1 and text2, return the length of their longest common subsequence.

https://leetcode.com/problems/longest-common-subsequence/

// created by Swapnil Kant.
// on 14-05-2020

int findlongestlength(string text1, string text2){
   int n = text1.length();
   int m = text2.length();
   // declare a final array.
   int dp[n + 1][m + 1];
   // get the first row and first column as 0.
   for(int i = 0; i < n + 1; i++)
      dp[i][0] = 0;
   for(int i = 0; i < m + 1; i++)
      dp[0][i] = 0;
   // fill the table from top-bottom order.
   for(int i = 1; i < n + 1; i++){
      for(int j = 1; j < m + 1; j++){
         if(text1[i - 1] == text2[j - 1])
           dp[i][j] = dp[i - 1][j - 1] + 1;
         else
           dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
      }
   }
   return dp[n][m];
}

// the space complexity of the above algorithm will be O(n*m).
// the time complexity of the above algorithm will be order n*m.
