// A string S of lowercase English letters is given. We want to partition this string into as many parts as possible so that each letter app
// ears in at most one part, and return a list of integers representing the size of these parts.

https://leetcode.com/problems/partition-labels/

// created by Swapnil Kant
// on 20-06-2020

vector<int> findpartition(string s){
  // get the length of string.
  int len = s.length();
  // map to store the mapping of character and index.
  unordered_map<char, int> mp;
  for(int i = 0; i < len; i++)
    mp[s[i]] = i;
  int slen1 = 0;
  int slen2 = 0;
  // vector to store final answer.
  vector<int> ans;
  // now traverse the string to create a partition.
  for(int i = 0; i < len; i++){
     slen1 = max(slen1, mp[s[i]]);
     if(slen1 == i){
       ans.push_back(slen1 - slen2 + 1);
       slen2 = slen1 + 1;
     }
  }
  return ans;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
