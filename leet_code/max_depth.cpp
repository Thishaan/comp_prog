/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */




class Solution {
public:


    int max_depth(TreeNode* root){

            // if null
        if(root == nullptr)
            return 0;
        // if  lead
        if(root->left == nullptr && root->right == nullptr){
            return 1;   
        }
        int left_depth = max_depth(root->left);
        int right_depth = max_depth(root->right);

        return 1 + max(right_depth, left_depth);
    }
    int maxDepth(TreeNode* root) {
            int res = max_depth(root);
            return res;
    }
};
