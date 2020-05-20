// Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary represen
// tation and return them as an array.

// created by Swapnil Kant
// on 20-05-2020

vector<int> countbits(int num){
  int n = num + 1;
  // allocate space to store the bits.
  vector<int> bit(n);
  bit[0] = 0;
  // if only size is 0.
  if(num == 0)
    return bit;
  bit[1] = 1;
  // if only size is 1.
  if(num == 1)
    return bit;
  int index = 2;
  int j = 2;
  int flag = 0;
  while(true){
     for(int i = 0; i < j; i++){
       bit[index++] = bit[i] + 1;
       // if the size reaches max break the loop operation is over.
       if(index == n){
         flag = 1;
         break;
       }
     }
     // break the outer loop as well.
     if(flag == 1)
       break;
     j *= 2;
 }
 return bit;
}

// the time complexity of the above algorithm will be O(logn).
// the space complexity of the above algorithm will be O(n).
