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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> travel;
        answer(root, travel);
        return travel;
    }
    void answer(TreeNode* root, vector<int>& travel){
        if(root==NULL){
            return;
        }
        answer(root->left, travel);
        answer(root->right, travel);
        travel.push_back(root->val);
    }
};