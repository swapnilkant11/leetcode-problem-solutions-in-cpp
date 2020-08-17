// Given the root node of a binary search tree (BST) and a value. You need to find the node in the BST that the node's value equals the 
// given value. Return the subtree rooted with that node. If such node doesn't exist, you should return NULL.

https://leetcode.com/problems/search-in-a-binary-search-tree/

TreeNode* searchBST(TreeNode* root, int val){
    //if root is NULL
    if(root == NULL)
      return NULL;
    else{
       // if the value is equal then return the root
       if(root->val == val)
	  return root;
       TreeNode *ans;
       // if the root value is greater than val to be searched
       else if(root->val > val)
          ans = searchBST(root->left, val);
       // else
       else
          ans = searchBST(root->right, val);
       return ans;
    }
}

// the time complexity of the above algorithm is O(n)
// the space complexity of the above algorithm is O(1), except for the system stack used
