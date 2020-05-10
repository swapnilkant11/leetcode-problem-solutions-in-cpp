// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
// created by Swapnil Kant
// on 10-05-2020

int longestvalidparenthesis(string s){
  int left = 0;
  int right = 0;
  int maxlength = 0;
  int n = s.size();
  // travserse from left to right.
  for(int i = 0; i < n; i++){
     if(s[i] == '(')
       left++;
     else
       right++;
     // if length equal we found a valid parenthesis.
     if(left == right)
       maxlength = max(maxlength, 2 * right);
    // if right exceeds right no valid parenthesis then reset the values.
    else if(right >= left){
       right = 0;
       left = 0;
    }
  }
  left = 0;
  right = 0;
  // traverse from right to left.
  for(int i = 0; i < n; i++){
     if(s[i] == '(') 
       left++;
     else 
       right++;
     // if length equal we found a valid parenthesis.
     if(right == left)
       maxlength = max(maxlength, 2 * right);
     // if left exceeds right no valid parenthesis then reset the values.
     else if(left >= right){
       right = 0;
       left = 0;
     }
  }
  return maxlength;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).


