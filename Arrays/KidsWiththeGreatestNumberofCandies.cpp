// Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
// For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.

// created by Swapnil Kant
// on 13-05-2020

vector<bool> findboolarray(int candies[], int n, int extracandies){
  int maxnum = candies[0];
  // find the maximum number from the array.
  for(int i = 0; i < n; i++){
    if(candies[i] > maxnum)
      maxnum = candies[i];
  }
  // array to store the output.
  vector<bool> vb;
  for(int i = 0; i < n; i++){
    int diff = maxnum - candies[i];
    // if difference is less than or equal to the extracandies then, push true to the output array.
    if(diff <= extracandies)
      vb.push_back(true);
    // else push false.
    else
      vb.push_back(false);
  }
  return vb;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
