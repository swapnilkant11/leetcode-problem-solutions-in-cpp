// Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while 
// the others are not.

// You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of 
// the merged node. Otherwise, the NOT null node will be used as the node of new tree.

https://leetcode.com/problems/merge-two-binary-trees/

TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2){
   // check for Null conditions
   if(t1 == NULL)
     return t2;
   if(t2 == NULL)
     return t1;
   // calculate sum
   t1->val += t2->val;
   // traverse the left subtree
   t1->left = mergeTrees(t1->left, t2->right);
   // traverse the right subtree
   t1->right = mergeTrees(t1->right, t2->right);
   return t1;
}

// the time complexity of the above algorithm is O(n), where 'n' is the total number of nodes of tree.
// the space complexity of the above algorithm is O(1).
