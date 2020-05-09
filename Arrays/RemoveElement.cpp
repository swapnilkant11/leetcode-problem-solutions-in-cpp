// Given an array nums and a value val, remove all instances of that value in-place and return the new length.
// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
//The order of elements can be changed. It doesn't matter what you leave beyond the new length.

// created by Swapnil Kant
// on 10-05-2020

int removeelement(int arr[], int n, int val){
  int k = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] != val)
      arr[k++] = arr[i];
  }
  return k;
}

// time complexity of the above algorithm is O(n).
// space complexity of the above solution is O(1).
