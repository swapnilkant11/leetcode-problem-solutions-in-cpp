// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// created by Swapnil Kant
// on 10-05-2020

int findmaxsum(int arr[], int n){
  int sum = 0;
  int maxsum = INT_MIN;
  for(int i = 0; i < n; i++){
    sum += arr[i];
    if(sum > maxsum)
      maxsum = sum;
    if(sum < 0)
      sum = 0;
  }
  return maxsum;
}

// the time complexity of the above algorithm is O(n).
// the space somplexity of the above algorithm is O(1). 
