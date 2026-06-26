class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: if one or both are null
        if (p == nullptr || q == nullptr) {
            return p == q;
        }
        
        // Check current value first, then recurse
        return (p->val == q->val) && 
               isSameTree(p->left, q->left) && 
               isSameTree(p->right, q->right);
    }
};

/*
Time complexity : O(n)
Space complexity : O(h) [h = height of tree]

*/