// Alice and Bob take turns playing a game, with Alice starting first.
// Initially, there is a number N on the chalkboard.  On each player's turn, that player makes a move consisting of:
// Choosing any x with 0 < x < N and N % x == 0.
// Replacing the number N on the chalkboard with N - x.
// Also, if a player cannot make a move, they lose the game.
// Return True if and only if Alice wins the game, assuming both players play optimally.

// created by Swapnil Kant
// on 11-05-2020

bool finddivisorgame(int n){
  if(n % 2 == 0)
    return true;
  return false;
}

// the main idea behind this algorithm is that whenever the value of N is even provided the first participant picks the integer 1 we will
// have the next integer available for the next participant and so on, so in the case of even only second will not win and in case of odd
// vice versa.

// the time complexity of the above solution is O(1).
// the space complexity of the above solution is O(1).
