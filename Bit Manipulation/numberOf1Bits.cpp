// Write a function that takes an unsigned integer and return the number of '1' bits it has (also known as the Hamming weight).
// created by Swapnil Kant
// on 20-05-2020

int hammingWeight(uint32_t n) {
 int count = 0;
 while(n > 0){
   if(n&1 == 1)
    count++;
   n = n>>1;
 }
 return count;
}

// the time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
