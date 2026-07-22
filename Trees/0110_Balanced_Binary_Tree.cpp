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
    int check_height(TreeNode* root){
        if (root == NULL) return 0;
        int lh = check_height(root->left);
        int rh = check_height(root->right);

        if(abs(lh-rh)>1) return -1;
        if(lh == -1 || rh == -1) return -1;
        return 1 +  max(lh,rh);
    }
    bool isBalanced(TreeNode* root){
        return check_height(root) != -1;
    }
};