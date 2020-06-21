//Given an array A of integers, for each integer A[i] we need to choose either x = -K or x = K, and add x to A[i] (only once).
// After this process, we have some array B.
// Return the smallest possible difference between the maximum value of B and the minimum value of B. 

https://leetcode.com/problems/smallest-range-ii/

// Created by Swapnil Kant
// on 19-06-2020

int smallestrangevector(vector<int> v, int K){
  // sort the vector to find the max min differene.
  sort(v.begin(), v.end());
  int diff = v.back() - v.front();
  // traverse the array to get the min max diff.
  for(auto first = v.begin(), last = first + 1; last != v.end(); ++first, ++last){
     // find the minimum difference according to the question.
     diff = min(diff, max(v.back() - K, *first + K) - min(v.front() + K, *last - K));
  return diff;
}

// the time compelxity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
