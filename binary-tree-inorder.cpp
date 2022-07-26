 #include <iostream>;
 #include <vector>;

using namespace std;
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    vector<int> vec{};
    void recursive(TreeNode* node){
        if(node){
        if(!node->left && !node->right){
            vec.push_back(node->val);
            return;
        }
        if(node->left){
            recursive(node->left);
        }
        vec.push_back(node->val);
        if(node->right){
            recursive(node->right);
        }
    
        }
            }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> out{};
        recursive( root);
        return vec;
    }
};