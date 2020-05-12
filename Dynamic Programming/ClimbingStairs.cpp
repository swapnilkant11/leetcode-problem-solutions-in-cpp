// You are climbing a stair case. It takes n steps to reach to the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// Note: Given n will be a positive integer.

// created by Swapnil Kant
// on 12-05-2020

int ClimbingStairs(int n){
  if(n == 1)
    return n;
  int stairs[n];
  stairs[0] = 1;
  stairs[1] = 2;
  for(int i = 2; i < n; i++)
    stairs[i] = stairs[i - 1]  + stairs[i - 2];
  return stairs[n];
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
