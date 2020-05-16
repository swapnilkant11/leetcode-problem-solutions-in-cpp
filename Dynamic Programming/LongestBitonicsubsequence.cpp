// Given an array of positive integers. The task is to print the maximum length of Bitonic subsequence. 
// a subsequenceof array is called Bitonic if it is first increasing, then decreasing.

// created by Swapnil Kant
// on 13-05-2020

void findbiotonicsequence(int arr[], int n){
   // find the longest increasing subsequence from starting of array.
   int fromstart[n];
   for(int i = 0; i < n; i++)
      fromstart[i] = 1;
   for(int i = 1; i < n; i++){
     for(int j = 0; j < i; j++){
        if(arr[i] > arr[j] && fromstart[i] < fromstart[j] + 1)
           fromstart[i] = fromstart[j] + 1;
     }
   }
   // find longest increasing subsequence from end of array.
   int fromend[n];
   for(int i = 0; i < n; i++)
      fromend[i] = 1;
   for(int i = n - 2; i >= 0; i--){
     for(int j = n - 1; j > i; j--){
        if(arr[i] > arr[j] && fromend[i] < fromend[j] + 1)
           fromend[i] = fromend[j] + 1;
     }  
   }
   // get the total array output.
   int total[n];
   int maxelement = fromstart[0] + fromend[0] - 1;
   for(int i = 0; i < n; i++)
      if(fromstart[i] + fromend[i] - 1 > maxlement)
         maxelement = fromstart[i] + fromend[i] - 1;
   }
   reutrn maxelement;
}

// the time complexity of the above algorithm is of order of n square.
// the space complexity of the above algorithm is O(1).
