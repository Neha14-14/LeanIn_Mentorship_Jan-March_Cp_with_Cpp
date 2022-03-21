class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> v;
        if(!root) return v;
        
        stack <TreeNode*> s;
        
        s.push(root);
        
        while(!s.empty()) {
            TreeNode* current = s.top();
            s.pop();
            v.push_back(current->val);
            
            if(current->right) s.push(current->right);
            
            if(current->left) s.push(current->left);
        }
        return v;
    } 
};
