// Given the number k, return the minimum number of Fibonacci numbers whose sum is equal to k, whether a Fibonacci number could be used 
// multiple times.

https://leetcode.com/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k/

// created by Swapnil Kant
// on 22-06-2020

int findpairsofsumK(int k){
  // generate the fibonacci series.
  vector<int> v = {1, 1, 2};
  while(v[v.size() - 1] < k)
    v.push_back(v[v.size() - 1] + v[v.size() - 2]);
  // now, get the count of pairs.
  int count = 0;
  for(int i = v.size() - 1; i >= 0; i--){
     // if the current number is greater than the value of k don't include it.
     if(v[i] > k)
        continue;
     if(k <= 0)
        break;
     k -= v[i];
     count++;
  }
  return count;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
