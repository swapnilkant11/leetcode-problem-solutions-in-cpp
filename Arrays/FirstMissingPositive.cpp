// Given an unsorted integer array, find the smallest missing positive integer.
// created by Swapnil Kant
// on 13-05-2020

int findmissingnumber(int arr[], int n){
  for(int i = 0; i < n; i++){
    // the main idea is to place the array elements in their index, so keep swapping until all elements are not placed at their index.
    while(arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i])
       swap(arr[i], arr[arr[i] - 1]);
  }
  // now keep checking the array if, any element is not in it's index which means it is only the smallest missing number.
  for(int i = 0; i < n; i++){
    if(arr[i] != i + 1)
      return i + 1;
  }
  return n + 1;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
