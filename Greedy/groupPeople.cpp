// There are n people whose IDs go from 0 to n - 1 and each person belongs exactly to one group. Given the array groupSizes of length n tell
// ing the group size each person belongs to, return the groups there are and the people's IDs each group includes.

// You can return any solution in any order and the same applies for IDs. Also, it is guaranteed that there exists at least one solution. 

// created by Swapnil Kant
// on 20-06-2020

vector<vector<int>> grouppeople(vector<int> &gs){
  // store the numbers and map them to their indices.
  map<int, vector<int>> mp;
  for(int i = 0; i < gs.size(); i++)
     mp[gs[i]].push_back(i);
  // get a vector to store the indices of each subarray.
  vector<int> temp;
  vector<vector<int>> ans;
  // now traverse the map to get the indices.
  for(auto itr = mp.begin(); itr != mp.end(); itr++){
     for(int i = 0; i < itr->second.size(); i++){
        temp.push_back(itr->second[i]);
        // if size becomes equal push the array.
        if(temp.size() == itr->first){
           ans.push_back(temp);
           temp.clear();
        }
     }
  }
  return ans;
}

// the time complexity of the above algorithm will be order of n square.
// the space complexity of the above algorithm will be O(n).
