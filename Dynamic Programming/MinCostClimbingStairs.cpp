// On a staircase, the i-th step has some non-negative cost cost[i] assigned (0 indexed).
// Once you pay the cost, you can either climb one or two steps. You need to find minimum cost to reach the top of the floor, and you can either start from the step with index 0, or the step with index 1.

// created by Swapnil Kant
// on 12-05-2020

int findthemincost(int arr[], int n){
  // for solving this we will need to traverse from back of the array to add the cost of the stairs.
  for(int i = 2; i < n; i++)
     cost[i] += min(cost[i - 1], cost [i - 2]);
  return min(cost[n - 1], cost[n - 2]);
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
