// Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*'.
// '?' Matches any single character. '*' Matches any sequence of characters (including the empty sequence).

// created by Swapnil Kant
// on 11-05-2020

int findwildcardmatching(string s, string p){
  int n = s.length();
  int m = p.length();
  if(m == 0)
    return (n == 0);
  int table[n + 1][m + 1];
  // initialize all elements as 0.
  memset(table, 0, sizeof(table));
  // initialize the first place as 1 because an empty string and empty pattern are identical.
  table[0][0] = 1;
  // fill the first row.
  for(int i = 1; i <= m; i++){
     if(p[i - 1] == '*')
       table[0][i] = table[0][i - 1];
  }
  // now fill for the rest of the spaces in the table.
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
       // if current is * then, we can either replace it as blank space or we can assume it to be the last character on string.
       if(p[j - 1] == '*')
          table[i][j] = table[i][j - 1] || table[i - 1][j];
       // if the current is ? then, either it matches the current character or if string and pattern are really the same.
       else if(p[j - 1] == '?'|| s[i - 1] == p[j - 1])
          table[i][j] = table[i - 1][j - 1];
       // else the character is different.
       else
          table[i][j] = 0;
    }
  }
  return table[n][m];
}

// the time complexity of the above algorithm will be of the order n square.
// the space complexity of the above algorithm will be of the order nxm.
