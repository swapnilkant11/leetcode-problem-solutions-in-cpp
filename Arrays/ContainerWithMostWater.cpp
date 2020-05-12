// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
// created by Swapnil Kant
// on 09-05-2020

int findmaxareaofwaterstored(int arr[], int n){
  int startpointer = 0;
  int endpointer = n - 1;
  // variable to store the max water which can be stored.
  int maxarea = INT_MIN;
  // run a loop till the elements of array do not intersect.
  while(startpointer < lastpointer){
    // calculate the max area by taking the least height of pillar * thhe distance between them.
    maxarea = max(maxarea, min(arr[startpointer], arr[lastpointer]) * (lastpointer - startpointer));
    // if the last element of array is greater than the first then, to increase the area value we will move to right in search of any greater height element.
    if(arr[startpointer] < arr[lastpointer])
       startpointer++;
    // else we will move to left.
    else
       lastpointer++;
  }
  return maxarea;
}

// time complexity of the above solution will be O(n).
// space complexity of the above solution will be O(1).
