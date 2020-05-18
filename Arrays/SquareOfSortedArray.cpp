// Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing
// order.

// created by Swapnil Kant
// on 17-05-2020

vector<int> sortedSquares(vector<int>& A) {
  int n = A.size();
  int i;
  for(i = 0; i < n; i++)
    A[i] = pow(A[i], 2);
  sort(A.begin(), A.end());
  return A;
}

// the time complexity of the above algorithm is O(nlogn).
// the space complexity of the above algorithm is O(1).
