// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two 
// preceding ones, starting from 0 and 1. That is,

// F(0) = 0,   F(1) = 1
// F(N) = F(N - 1) + F(N - 2), for N > 1.
// Given N, calculate F(N).

// created by Swapnil Kant
// on 18-05-2020

int fib(int n) {
  if(n == 0)
    return 0;
  else if(n == 1)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}

// the time complexity of the above algorithm is in the order of O(2^n) (exponential due to recursion).
// the space ciomplexity of the above algorithm is O(1).
