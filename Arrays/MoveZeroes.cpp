// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// created by Swapnil Kant
// on 10-05-2020

void movezeroesatend(int arr[], int n){
  int j = 0;
  int i = 0;
  while(i < n){
    if(arr[i] != 0){
      arr[j++] = arr[i];
    }
    i++;
  }
  while(j < n)
    arr[j++] = 0;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
