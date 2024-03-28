#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// class Solution
// {
// public:
//     std::vector<int> postorderTraversal(TreeNode *root)
//     {
//         std::vector<int> result;
//         traversal(root, result);
//         return result;
//     }
//     void traversal(TreeNode *root, std::vector<int> &result)
//     {
//         if (root == NULL)
//             return;

//         traversal(root->left, result);
//         traversal(root->right, result);
//         result.push_back(root->val);
//     }
// };

class Solution
{
public:
    std::vector<int> postorderTraversal(TreeNode *root)
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
            if (node->left)
                st.push(node->left);
            if (node->right)
                st.push(node->right);
        }
        std::reverse(result.begin(),result.end());
        return result;
    }
};