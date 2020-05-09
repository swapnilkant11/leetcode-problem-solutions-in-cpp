// Given an array of integers, find if the array contains any duplicates.
// Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

// created by Swapnil Kant
// on 10-05-2020

bool removeduplicate(int arr[], int n){
  unordered_set<int> s;
  for(int i = 0; i < n; i++){
    if(s.find(arr[i] != s.end())
      return true;
    s.insert(arr[i]);
  }
  return false;
}

// the time complexity of the above agorithm will be O(n).
// the space complexity of the above algorithm will be O(n).
