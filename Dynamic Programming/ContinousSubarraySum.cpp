// Given a list of non-negative numbers and a target integer k, write a function to check if the array has a continuous subarray of size at 
// least 2 that sums up to a multiple of k, that is, sums up to n*k where n is also an integer.

// created by Swapnil Kant 
// on 17-05-2020

bool continoussum(int arr[], int n, int k){
  //declare a map to store the index of the elements occured.
  map<int, int> mp;
  mp[0] = -1;
  // sum variable.
  int sum = 0;
  for(int i = 0; i < n; i++){
    // calculate the sum.
    sum += arr[i];
    if(k != 0){
      // calulate mod.
      int modno = sum % k;
      if(mp.find(modno) != mp.end()){
        // check for subarray condition.
        if(i - mp[modno] > 1)
           return true;
      }
      else
        mp[modno] = i;
    }
  }
  return false;
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(n).
