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
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        height(root, sum);
        return sum;
    }
    int height(TreeNode* root, int &sum){
        if(root == NULL)   return NULL;

        int lh = max(0,height(root->left, sum));  //to avoid more negative branches
        int rh = max(0,height(root->right, sum));

        sum = max(sum, root->val+lh+rh);

        return root->val + max(lh,rh);
    }
};