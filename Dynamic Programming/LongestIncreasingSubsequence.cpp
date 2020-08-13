// Given a sequence A of size N, find the length of the longest increasing subsequence from a given sequence .
// The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.
// Note: Duplicate numbers are not counted as increasing subsequence.

https://leetcode.com/problems/longest-increasing-subsequence/

// created by Swapnil Kant
// on 13-05-2020

int findlongestsubsequence(int arr[], int n){
   int ans[n];
   for(int i = 0; i < n; i++)
     ans[i] = 1;
   for(int i = 1; i < n; i++){
     for(int j = 0; j < i; j++)
       if(arr[i] > arr[j] && ans[i] < ans[j] + 1)
          ans[i] = ans[j] + 1;
     }
   }
   int maxelement = ans[0];
   for(int i = 0; i < n; i++)
     if(ans[i] > maxelement)
       maxelement = ans[i];
   }
   return maxelement;
}

// the time complexity of the above algorithm will be of order n square.
// the space complexity of the above algorithm will be O(n).
