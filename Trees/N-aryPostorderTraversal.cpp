// Given an n-ary tree, return the postorder traversal of its nodes' values.

// Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value 
// (See examples).

https://leetcode.com/problems/n-ary-tree-postorder-traversal/

vector<int> v;
void PostOrderTraversal(TreeNode *root){
   // if root is NULL
   if(root == NULL)
      return;
   for(auto child :root->children)
       PostOrderTraversal(child);
   v.push_back(root->val);
}

// function to all the above function
vector<int> TaversalUtil(TreeNode *root){
   PostOrderTraversal(root);
   return v;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(n).
