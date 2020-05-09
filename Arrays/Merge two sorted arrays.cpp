// arrays arr1 and arr2 are of different sizes and their size are given as n and m respectively with out using any extra space.
// Created by Swapnil Kant.
// On 09-05-2020.

int mergetwosortedarrays(int arr1[], int arr2[], int n, int m){
  for(int i = m - 1; i >= 0; i--){
    int j;
    int lastelement = arr1[n - 1];
    for(j = n - 2; j >= 0 && arr1[j] > arr2[i]; j--)
      arr1[j + 1] = arr1[j];
    if(j != n - 2 || arr1[j] > arr2[i]){
      arr1[j + 1] = arr2[i];
      arr2[i] = lastelement;
    }
  }
}

// Time complexity of the algorithm is O(n+m).
// Space complexity is O(1).
