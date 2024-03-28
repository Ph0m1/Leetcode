#include <iostream>
#include <vector>
#include <stack>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// class Solution{
// public:
//     std::vector<int> preorderTraversal(TreeNode* root){
//         std::vector<int> result;
//         traversal(root,result);
//         return result;
//     }
//     void traversal(TreeNode* root,std::vector<int>& result){
//         if(root == NULL) return;
//         result.push_back(root->val);
//         traversal(root->left,result);
//         traversal(root->right,result);
//     }
// };

class Solution
{
public:
    std::vector<int> preorderTraversal(TreeNode *root)
    {
        std::stack<TreeNode *> st;
        std::vector<int> result;
        if (root == NULL) 
            return result;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *node = st.top();
            st.pop();
            result.push_back(node->val);
            if (node->right)
                st.push(node->right);
            if (node->left)
                st.push(node->left);
        }
        return result;
    }
};