// Given two strings: s1 and s2 with the same size, check if some permutation of string s1 can break some permutation of string s2 or 
// vice-versa (in other words s2 can break s1).

// A string x can break string y (both of size n) if x[i] >= y[i] (in alphabetical order) for all i between 0 and n-1.

https://leetcode.com/problems/check-if-a-string-can-break-another-string/

// created by Swapnil Kant
// on 21-06-2020

bool findstringscanbreak(string str1, string str2){
  // get the size
  int len1 = str1.length();
  int len2 = str2.length();
  if(len1 != len2)
    return false;
  int A[26] = {0};
  int B[26] = {0};
  for(int i = 0; i < len1; i++)
    A[str1[i] - 'a']++;
  for(int i = 0; i < len2; i++)
    B[str2[i] - 'a']++;
  int count = 0;
  int a = 0;
  int b = 0;
  for(int i = 0; i < 26; i++){
      a += A[i];
      b += B[i];
      if(a > b && count == 1)
        return false;
      if(b > a && count == 2)
        return false;
      if(a > b && count == 0)
        count = 2;
      else if(b > a && count == 0)
        count = 1;
  }
  return true;
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(n).
