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
//     std::vector<int> inorderTraversal(TreeNode* root){
//         std::vector<int> result;
//         traversal(root,result);
//         return result;
//     }
//     void traversal(TreeNode* root,std::vector<int>& result){
//         if(root == NULL) return;
//         traversal(root->left,result);
//         result.push_back(root->val);
//         traversal(root->right,result);
//     }
// };


class Solution{
public: 
    std::vector<int> inorderTraversal(TreeNode* root){
        std::stack<TreeNode*> st;
        std::vector<int> result;
        TreeNode *cur = root;
        while(cur!=NULL || !st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur = cur->left;
            }else{
                cur = st.top();
                st.pop();
                result.push_back(cur->val);
                cur = cur->right;
            }
        }
        return result;
    }
};