// Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).
// The binary search tree is guaranteed to have unique values.

https://leetcode.com/problems/range-sum-of-bst/

struct node{
   int data;
   struct node *left;
   struct node *right;
}

// function for calculating sum
void checkSumBSTUtil(struct node *root, int *sum, int L, int R){
  // if root is NULL
  if(root == NULL)
    return;
  else{
     // traverse left subtree if it exists
     if(root->left != NULL)
       chekSumBSTUtil(root->left, sum, L, R);
     // if the condition is met, add them to sum
     if(root->data >= L && root->data <= R)
        *sum = *sum + root->data;
     // traverse right subtree if it exists
     if(root->right != NULL)
       checkSumBSTUtil(root->right, sum, L, R);
  }
}

// utility function
int RangeSumBST(struct node *root, int L, int R){
   // if NULL return
   if(root == NULL)
     return 0;
   int sum = 0;
   checkSumBSTUtil(root, &sum, L, R);
   return sum;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1), except for memory stack used.
