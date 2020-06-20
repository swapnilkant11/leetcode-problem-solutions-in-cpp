// Given a string S of '(' and ')' parentheses, we add the minimum number of parentheses ( '(' or ')', and in any positions ) so that the resulting parentheses string is valid.

// Formally, a parentheses string is valid if and only if:

// It is the empty string, or
// It can be written as AB (A concatenated with B), where A and B are valid strings, or
// It can be written as (A), where A is a valid string.
// Given a parentheses string, return the minimum number of parentheses we must add to make the resulting string valid.

// created by Swapnil Kant
// on 21-06-2020

int validparentesis(string s){
  int open = 0;
  int close = 0;
  int len = s.length();
  for(int i = 0; i < len; i++){
     if(s[i] == '(')
        open++;
     else if(open)
        open--;
     else
        close++;
  }
  return open + close;
}

// the time compexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
