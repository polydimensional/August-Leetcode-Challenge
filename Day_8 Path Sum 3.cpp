class Solution {
public:
    int path=0;
    int pathSum(TreeNode* root, int sum) {
        if(root)
        {
            helper(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }
        return path;
        
    }
    void helper(TreeNode* root,int sum)
    {
        if(!root) return;
        if(root->val==sum) path++;
        helper(root->left,sum-root->val);
        helper(root->right,sum-root->val);
        
    }
};