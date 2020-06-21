//Given an array arr.  You can choose a set of integers and remove all the occurrences of these integers in the array.
// Return the minimum size of the set so that at least half of the integers of the array are removed. 

https://leetcode.com/problems/reduce-array-size-to-the-half/

// created by Swapnil Kant
// on 21-06-2020

int reducearray(vector<int>& arr){
  // get the size.
  int len = arr.size();
  // map to store the frquency of numbers.
  map<int, int> mp;
  // vector to store the final answer.
  vector<int> ans;
  for(int i = 0; i < len; i++)
     mp[arr[i]]++;
  // push the frequency so obtained.
  for(auto itr = mp.begin(); itr != mp.end(); itr++)
     temp.push_back(itr->second);
  // sort the vector to get max first in drcreasing order.
  sort(temp.begin(), temp.end(), greater<int>());
  int count = len / 2;
  int ans = 0;
  // now get the count.
  for(int i = 0; i < temp.size(); i++){
     if(count <= 0)
        break;
     count -= temp[i];
     ans++;
  }
  return ans;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
