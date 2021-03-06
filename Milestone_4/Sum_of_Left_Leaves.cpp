class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        stack<TreeNode*> stk;
        stk.push(root);
        int total = 0;
        while(stk.empty() != true){
            TreeNode* temp = stk.top();
            stk.pop();
if(temp->left != NULL and temp->left->left == NULL and temp->left->right == NULL)
            {
                total += temp->left->val;
            }
            if(temp->right != NULL) stk.push(temp->right);
            if(temp->left != NULL) stk.push(temp->left);
        }
        return total;
        
    }
};
