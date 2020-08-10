// A message containing letters from A-Z is being encoded to numbers using the following mapping:
// 'A' -> 1
// 'B' -> 2
// ...
// 'Z' -> 26
// Given a non-empty string containing only digits, determine the total number of ways to decode it.

https://leetcode.com/problems/decode-ways/

// created by Swapnil Kant
// on 16-05-2020

int decoding(string str){
  int n = str.length();
  // if the first char at string is 0 return 0;
  if(s[0] == '0')
    return 0;
  // now declare an array to store the result.
  int dp[n + 1];
  // initialize all elements as 0.
  for(int i = 0; i < n + 1; i++)
     dp[i] = 0;
  dp[0] = 1;
  dp[1] = 1;
  for(int i = 2; i < n + 1; i++){
     // if the current character is greater than or equal to 1 then, include it.
     if(s[i] >= '1')
       dp[i] += dp[i - 1];
     // if the both digits are in range then, include it.
     if(dp[n - 2] == '1' || (dp[n - 2] == '2' && dp[n - 1] < '7'))
       dp[i] += dp[i - 2];
  }
  return dp[n];
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(n).
