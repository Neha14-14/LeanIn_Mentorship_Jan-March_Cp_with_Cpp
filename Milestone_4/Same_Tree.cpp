class Solution {
public:
    bool check(TreeNode* p, TreeNode* q){
       
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == NULL && q == NULL) return true;
        if(!check(p, q)) return false;
        
        queue<TreeNode*> q1, q2;
        
        q1.push(p);
        q2.push(q);
        
        while(!q1.empty()){
            p = q1.front(); q1.pop();
            q = q2.front(); q2.pop();
            
            if(p == NULL && q == NULL) continue;
            if(!check(p, q)) return false;
            
            if(!check(p->left, q->left)) return false;
            if(p->left != NULL){
                q1.push(p->left);
                q2.push(q->left);
            }
            
            if(!check(p->right, q->right)) return false;
            if(p->right != NULL){
                q1.push(p->right);
                q2.push(q->right);
            }
        }
        
        return true;
    }
};
