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
    void traverse(TreeNode* node, vector<int>* arr){
        if (!node) return;
        traverse(node->left, arr);
        arr->push_back(node->val);
        traverse(node->right, arr);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        traverse(root, &arr);
        return arr;
    
    }
};