// You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is 
// a type of stone you have.  You want to know how many of the stones you have are also jewels.
// The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a d
// ifferent type of stone from "A".

// created by Swapnil Kant
// on 20-05-2020

int numJewelsInStones(string J, string S) {
  unordered_set<int> s;
  int i;
  int count = 0;
  int n = S.length();
  int m = J.length();
  // push jwels into the set to check if it is a stone or not.
  for(i = 0; i < m; i++)
    s.insert(J[i]);
  // start checking from the table.
  for(i = 0; i < n; i++){
   if(s.find(S[i]) != s.end())
    count++;
 }
 return count;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
