// Given a non-empty string s and a dictionary wordDict containing a list of non-empty words, 
// determine if s can be segmented into a space-separated sequence of one or more dictionary words.

// created by Swapnil Kant
// on 14-05-2020

bool findstringtype(string str, vector<string> dict){
  int n = str.length();
  // declare an array to store the result.
  bool dp[n + 1];
  for(int i = 0; i < n; i++)
    dp[i] = false;
  dp[0] = true;
  // traverse the array and keep getting for the result.
  for(int i = 0; i < n; i++){
     for(auto x: dict){
        int len = x.length();
        if(dp[i] == true){
           if(s.substr(i, len) == x)
             dp[i + len] = true;
        }
     }
  }
  return dp[n];
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
