// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.

// created by Swapnil Kant
// on 20-05-2020

vector<int> twosum(int arr[], int n, int target){
  for(int i = 0; i < n; i++){
     for(int j = i + 1; j < n; j++){
	if(arr[i] + arr[j] == target)
	  return {i, j};
     }
     return {0, 0};
  }
}

// the time complexity of the above solution will be of order n square.
// the space complexity of the above solution will be of the order 1.
