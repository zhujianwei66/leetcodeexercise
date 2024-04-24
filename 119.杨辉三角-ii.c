/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2021-11-28 20:31:15
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-15 22:29:28
 */
/*
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int *getRow(int rowIndex, int *returnSize)
{
    *returnSize = rowIndex + 1;
    int *res[*returnSize];
    for (int i = 0; i <= rowIndex; i++)
    {
        res[i] = (int *)malloc(sizeof(int) * (i + 1));
        memset(res[i], 0, sizeof(int) * (i + 1));
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
    }
    return res[rowIndex];
}
// @lc code=end
