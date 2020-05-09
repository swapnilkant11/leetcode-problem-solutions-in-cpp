// Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
// created by Swapnil Kant
// on 10-05-2020

int findmissing(int arr[], int n){
   int xornumber = 0;
   int xorarray = arr[0];
   for(int i = 1; i <= n; i++)
     xornumber = xornumber ^ i;
   for(int i = 1; i < n; i++)
     xorarray = xorarray ^ arr[i];
   return xornumber ^ xorarray;
}

// the time complexity for the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
