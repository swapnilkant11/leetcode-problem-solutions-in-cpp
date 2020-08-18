// Given a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every 
// node has no left child and only 1 right child.

https://leetcode.com/problems/increasing-order-search-tree/

vector<int> v;
// function for tree traversal
void InorderTraversal(TreeNode *root){
  // check if root is NULL
  if(root == NULL)
    return;
  InorderTraversal(root->left);
  v.push_back(root->val);
  InorderTraversal(root->right);
}

// function to convert the tree
TreeNode *returnTree(TreeNode *root){
  // if root is NULL
  if(root == NULL)
     return NULL;
  // get the tree data
  InorderTraversal(root);
  // now form tree
  TreeNode *start = new TreeNode(v[0]);
  TreeNode *nextNode = start;
  // loop through the vector
  for(int i = 1; i < v.size(); i++){
     TreeNode *temp = new TreeNode(v[i]);
     nextNode->right = temp;
     nextNode = nextNode->right;
  }
  return start;
}

// the time complexity of the above algorithm is O(n), n is the number of nodes in tree.
// the space complexity of the above algorithm is O(n), vector used.
