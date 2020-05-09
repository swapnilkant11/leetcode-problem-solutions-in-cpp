// the array is given containing the heights of the bars find the maximum quantity of water that can be stored.
// created by Swapnil Kant
// on 09-05-2020

int findmaxareaofwaterstored(int arr[], int n){
  int startpointer = 0;
  int endpointer = n - 1;
  int maxarea = INT_MIN;
  while(startpointer < lastpointer){
    maxarea = max(maxarea, min(arr[startpointer], arr[lastpointer]) * (lastpointer - startpointer));
    if(arr[startpointer] < arr[lastpointer])
       startpointer++;
    else
       lastpointer++;
  }
  return maxarea;
}

// time complexity of the above solution will be O(n).
// space complexity of the above solution will be O(1).
