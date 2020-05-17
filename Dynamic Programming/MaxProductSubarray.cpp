// Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

// created by Swapnil Kant
// on 17-05-2020

int maxproductsubarray(int arr[], int n){
   // declare the variables.
   int maxproduct = arr[0];
   int minproduct = arr[0];
   int result = arr[0];
   // now traverse the array and calculate the max product.
   for(int i = 1; i < n; i++){
      // if the current array element is negative.
      if(arr[i] < 0){
        int temp = maxproduct;
        // then maxproduct will be.
        maxproduct = max(arr[i], minproduct * arr[i]);
        // minproduct will be.
        minproduct = min(arr[i], temp * arr[i]);
      }
      // when the current integer is positive then, max min will get normally calculated.
      else{
        maxproduct = max(arr[i], maxproduct * arr[i]);
        minproduct = min(arr[i], minproduct * arr[i]);
      }
    result = max(result, maxproduct);
   }
   return result;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
