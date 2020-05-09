// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
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
