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
private:
    vector<int> check;
public:
    int deepestLeavesSum(TreeNode* root) {
        sum(root, 0);
        return check.back();
    }
    void sum(TreeNode* root, int level)
    {
        if(level==check.size()){
            check.push_back(root->val);
        }
        else{
            check[level]+=root->val;
        }
        if(root->left){
            sum(root->left, level+1);
        }
        if(root->right){
            sum(root->right, level+1);
        }
    }
};