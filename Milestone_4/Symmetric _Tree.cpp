class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        deque<TreeNode*> todo;
        todo.push_back(root);
        while (!todo.empty()) {
            for (int i = 0, len = todo.size(); i < len / 2; i++) {
                if (todo[i] == NULL && todo[len - i - 1] || todo[i] && todo[len - i - 1] == NULL) {
                    return false;
                }
                if (todo[i] && todo[len - i - 1] && todo[i]->val != todo[len - i - 1]->val) {
                    return false;
                }
            }
            
            for (int t = todo.size(); t > 0; t--) {
                TreeNode* cur = todo.front();
                todo.pop_front();
                if (cur) {
                    if (cur && cur->left) {
                        todo.push_back(cur->left);
                    }
                    else {
                        todo.push_back(NULL);
                    }

                    if (cur && cur->right) {
                        todo.push_back(cur->right);
                    }
                    else {
                        todo.push_back(NULL);
                    }
                }
            }
        }
        
        return true;
    }
};
