// Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers (h, k), where h is the 
// height of the person and k is the number of people in front of this person who have a height greater than or equal to h. Write an algorithm
// to reconstruct the queue.

https://leetcode.com/problems/queue-reconstruction-by-height/

// created by Swapnil Kant
// on 21-06-2020

vector<vector<int>> returnQueue(vector<vector<int>& v){
   // convert all to negative number for easy sorting.
   for(auto &a : v)
      a[0] = -a[0];
   // sort the vector according to the height of the people.
   sort(v.begin(), v.end());
   vector<vector<int>> ans;
   for(auto &a : v){
      a[0] = -a[0];
      ans.insert(ans.begin() + v[1], v);
   }
   return ans;
}

// the time complexity of the above algorithm will be O(nlogn).
// the space complexity of the above algorithm will be O(n).
