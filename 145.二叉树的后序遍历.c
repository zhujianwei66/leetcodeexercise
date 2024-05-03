/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-25 23:14:47
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-25 23:16:02
 */
/*
 * @lc app=leetcode.cn id=145 lang=c
 *
 * [145] 二叉树的后序遍历
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
void postorder(struct TreeNode *root, int *tree_array, int *returnSize)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left, tree_array, returnSize);
    postorder(root->right, tree_array, returnSize);
    tree_array[(*returnSize)++] = root->val;
}

int *postorderTraversal(struct TreeNode *root, int *returnSize)
{
    int *ret = (int *)malloc(2000 * sizeof(int));
    *returnSize = 0;
    postorder(root, ret, returnSize);
    return ret;
}
// @lc code=end
