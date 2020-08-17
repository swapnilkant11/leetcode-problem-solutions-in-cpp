// Given an n-ary tree, return the preorder traversal of its nodes' values.
// Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value 
// (See examples).

https://leetcode.com/problems/n-ary-tree-preorder-traversal/

vector<int> ans;
void PreorderTraversal(TreeNode* root){
   if(root == NULL)
     return;
   ans.push_back(root->val);
   for(auto child : children)
      PreorderTraversal(child);
}

vector<int> Traversal(TreeNode* root){
   PreorderTraversal(root);
   return ans;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1).
