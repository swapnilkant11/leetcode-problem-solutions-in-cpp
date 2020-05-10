// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
// Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

// created by Swapnil Kant
// on 11-05-2020

int counttotalmoneyrobbed(int arr[], int n){
  int val1 = arr[0];
  // when size 1 return the first element.
  if(n == 1)
    return val1;
  int val2 = max(arr[0], arr[1]);
  // when size 2 return the maximum of first or the second element.
  if(n == 2)
    return val2;
  // keep summing for the rest of the array if the array size is greater than 2.
  for(int i = 3; i < n; i++){
    int maxsum = max(arr[i] + val1, val2);
    val1 = val2;
    val2 = maxsum;
  }
  return maxsum;
}

// the time complexity of the above solution is O(n).
// the space complexity of the above solution is O(1).
