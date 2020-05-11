// Say you have an array for which the ith element is the price of a given stock on day i.
// If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
// Note that you cannot sell a stock before you buy one.

// created by Swapnil Kant
// on 12-05-2020

int findstocks(int arr[], int n){
  int minprofit = INT_MAX;
  int maxprofit = 0;
  // the idea is to find the first valley followed by the next mountain.
  for(int i = 0; i < n; i++){
    if(arr[i] < minprofit)
      minprofit = arr[i];
    else if(arr[i] - minprofit > maxprofit)
      maxprofit = arr[i] - minprofit;
  }
  return maxprofit;
}

// the time complexity of the aobe algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
