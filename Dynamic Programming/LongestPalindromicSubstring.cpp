// Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
// created by Swapnil Kant
// on 10-05-2020

string findpalindromicsubstring(string s){
  int n = s.size();
  // declare a table of size nxn.
  int table[n][n];
  // initialize the table as 0 for all values.
  memset(table, 0, sizeof(table));
  int maxlength = 1;
  // compute for single characters.
  for(int i = 0; i <= n - 1; i++)
    table[i][i] = 1;
  // compute for string comprising of 2 characters.
  int start = 0;
  for(int i = 0; i < n - 1; i++){
     if(s[i] == s[i + 1]){
       start = i;
       maxlength = 2;
     }
  }
  // compute for string comprising of length more than 2 characters.
  for(int i = 3; i <= n; i++){
    for(int k = 0; k < n - i + 1; k++){
       // declare endpoint.
       int l = k + i - 1;
       if(table[k + 1][l - 1] == 1 && s[k] == s[l]){
         table[k][l] = 1;
         if(i > maxlength){
            maxlength = i;
            start = k;
         }
       }
    }
  }
  string str = "";
  for(int i = start; i <= start + maxlength - 1; i++)
     str += s[i];
  return str;
}

// the time complexity of the above solution will be of the order n square.
// the space complexity of the above solution will be of the order n square.
