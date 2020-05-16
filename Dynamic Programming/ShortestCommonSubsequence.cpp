// Given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences. 
// If multiple answers exist, you may return any of them.

// created by Swapnil Kant
// on 14-05-2020

string returnshortedtcommonsubsequence(string text1, string text2){
   int n = text1.length();
   int m = text2.length();
   // declare an array to store the result.
   int dp[n + 1][m  + 1];
   for(int i = 0; i < n + 1; i++)
      dp[i][0] = 0;
   for(int i = 0; i < m + 1; i++)
      dp[0][i] = 0;
   for(int i = 1; i < n + 1; i++){
      for(int j = 1; j < m + 1; j++){
         if(text1[i - 1] == text2[j - 1])
           dp[i][j] = dp[i - 1][j - 1] + 1;
         else
           dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
      }
   }
   // now store the characters to the new string.
   string str = "";
   int i = n; 
   int j = m;
   while(i > 0 && j > 0){
      if(text1[i - 1] == text2[j - 1]){
          str += text1[i - 1];
          i--;
          j--;
      }
      else if(dp[i][j - 1] > dp[i - 1][j]){
          str += text2[j - 1];
          j--;
      }
      else{
          str += text1[i - 1];
          i--;
      }
  }
  while(i > 0){
      str += text1[i - 1]
      i--;
  }
  while(j > 0){
      str += text2[j - 1]
      j--;
  }
  return str;
}

// the time complexity of the above algorithm will be O(n*m).
// the space complexity of the above algorithm will be O(n*m).
