// Given two sorted arrays, arr1[] and arr2[], the task is to find the median of these sorted arrays, in O(log n + log m) time complexity, when n is the number of elements in the first array, and m is the number of elements in the second array.
// Created by Swapnil Kant.
// On 09-05-2020.

int mergetwosortedarrays(int arr1[], int arr2[], int n, int m){
  for(int i = m - 1; i >= 0; i--){
    int j;
    // get the last element of the first array because if the last element of array is greatest then, there is no need to shift the element.
    int lastelement = arr1[n - 1];
    // start comparing the elements from the end of the first array.
    for(j = n - 2; j >= 0 && arr1[j] > arr2[i]; j--)
      arr1[j + 1] = arr1[j];
    // if the element of first array is not greater we will need to exchange the elements to make the array sorted.
    if(j != n - 2 || lastelement > arr2[i]){
      arr1[j + 1] = arr2[i];
      arr2[i] = lastelement;
    }
  }
}

// Time complexity of the algorithm is O(n+m).
// Space complexity of the above algorithm is O(1).

