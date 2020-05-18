// Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
// You may return any answer array that satisfies this condition.

// created by Swapnil Kant.
// on 17-05-2020

vector<int> returnsortedarray(vector<int> arr){
  // doing inplace sorting.
  int i = 0;
  int j = arr.size() - 1;
  while(i < j){
    if(arr[i] % 2 > arr[j] % 2)
       swap(arr[i], arr[j]);
    if(arr[i] % 2 == 0)
      i++;
    if(arr[j] % 2 != 0)
      j--;
  }
  return arr;
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
