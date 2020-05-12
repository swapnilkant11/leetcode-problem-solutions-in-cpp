// Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
//Return the sum of the three integers. You may assume that each input would have exactly one solution.

// created by Swapnil Kant
// on 10-05-2020

int closestthreesum(int arr[], int n, int target){
  int maxsum = INT_MAX;
  int sum = 0;
  for(int i = 0; i < n; i++){
     // get the starting element as the next of current element.
     int startpointer = i + 1;
     // get the final element as the last element of the array.
     int endpointer = n - 1;
     // check for non intersecting element.
     if(startpointer < endpointer){
       sum = arr[i] + arr[startpointer] + arr[endpointer];
       // if current closest sum found update the variable maxsum.
       if(abs(1LL*target - sum) < abs(*1LLtarget - maxsum))
          maxsum = sum;
     }
     // if sum is greater than target proceed to left of array.
     if(sum > target)
       endpointer--;
     // else proceed right.
     else
       startpointer++;
  }
  return maxsum;
}

// the time complexity of the above solution will be O(n).
// the space complexity of the above algorithm is O(1).
