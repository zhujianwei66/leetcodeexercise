/*
 * @lc app=leetcode.cn id=144 lang=c
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorder(struct TreeNode *root, int *tree_array, int *returnSize)
{
    if (root == NULL)
    {
        return;
    }
    tree_array[(*returnSize)++] = root->val;
    preorder(root->left, tree_array, returnSize);
    preorder(root->right, tree_array, returnSize);
}

int *preorderTraversal(struct TreeNode *root, int *returnSize)
{
    int *ret = (int *)malloc(2000 * sizeof(int));
    *returnSize = 0;
    preorder(root, ret, returnSize);
    return ret;
}
// @lc code=end
