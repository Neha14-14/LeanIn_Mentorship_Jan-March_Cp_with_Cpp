class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) return result;
        stack<TreeNode*> stack;        
        stack.push(root);
        while (!stack.empty()) {
            TreeNode* top = stack.top();
            result.push_back(top->val);
            stack.pop();
            if(top->left) stack.push(top->left);
            if(top->right) stack.push(top->right);            
        }
        reverse(result.begin(), result.end());
        return result;     
    
    }
};
