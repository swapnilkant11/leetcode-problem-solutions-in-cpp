// Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which 
// makes sum of min(ai, bi) for all i from 1 to n as large as possible.

// created by Swapnil Kant
// on 18-05-2020

int arrayPairSum(vector<int>& nums) {
 int i = 0;
 sort(nums.begin(), nums.end());
 int n = nums.size();
 int sum = 0;
 while(i < n - 1){
   sum = sum + nums[i];
   i = i + 2;
 }   
 return sum;
}

// the time complexity of the above algorithm will be O(nlogn).
// the space complexity of the above algorithm will be O(1). 
