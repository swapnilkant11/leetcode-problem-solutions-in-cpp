// Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
//Return the sum of the three integers. You may assume that each input would have exactly one solution.

// created by Swapnil Kant
// on 10-05-2020

int closestthreesum(int arr[], int n, int target){
  int maxsum = INT_MAX;
  int sum = 0;
  for(int i = 0; i < n; i++){
     int startpointer = i + 1;
     int endpointer = n - 1;
     if(startpointer < endpointer){
       sum = arr[i] + arr[startpointer] + arr[endpointer];
       if(abs(1LL*target - sum) < abs(*1LLtarget - maxsum))
          maxsum = sum;
     }
     if(sum > target)
       endpointer--;
     else
       startpointer++;
  }
  return maxsum;
}

// the time complexity of the above solution will be O(n).
// the space complexity of the above algorithm is O(1).
