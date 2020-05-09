// There are two sorted arrays arr1 and arr2 of size n and m respectively.
// Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
// created by Swapnil Kant
// on 09-05-2020

int medianoftwosortedarrays(int arr1[], int arr2[], int n, int m){
  int i = 0;
  int j = 0;
  int m1 = -1;
  int m2 = -1;
  // for even sum sized array.
  if((n + m) % 2 == 0){
      for(int count = 0; count <= (n + m) / 2; count++){
	  if(i != n && j != m)
	    m1 = (arr1[i] > arr2[j]) ? arr2[j++] : arr1[i++];
	  else if(i < n)
	    m1 = arr1[i++];
	  else
            m1 = arr2[j++];
      }
      return m1;
  }
  // for odd sum sized array.
  else{
      for(int count = 0; count <= (n + m) / 2; count++){
	 m2 = m1;
	 if(if(i != n && j != m)
            m1 = (arr1[i] > arr2[j]) ? arr2[j++] : arr1[i++];
          else if(i < n)
            m1 = arr1[i++];
          else
            m1 = arr2[j++];
      }
      return (m1 + m2) / 2;
  }
}

// Time complexity of the above algorithm will be O(n + m).
// Space complexity of the above algorithm will be O(1).



