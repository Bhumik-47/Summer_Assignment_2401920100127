class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != nullptr &a& root->val != val) {
            if (val > root->val) {
                root = root->right;
            } else {
                root = root->left;
            }
        }
        return root; 
    }
};

/*
Time complexity : O(H)
space complexity : O(1)
*/