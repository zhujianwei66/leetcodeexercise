/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-28 19:29:00
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-28 20:25:36
 */
/*
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

// @lc code=start

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    int i = 0;
    int **ret = (int **)calloc(numRows, sizeof(int *));       //返回数组
    *returnSize = numRows;                                    //返回的二维数组大小
    *returnColumnSizes = (int *)calloc(numRows, sizeof(int)); //每个数组的大小
    for (i = 0; i <= numRows - 1; i++)
    {
        ret[i] = (int *)calloc(i + 1, sizeof(int));
        (*returnColumnSizes)[i] = i + 1;
        ret[i][0] = 1; //头赋1
        ret[i][i] = 1; //尾赋1
        for (int j = 1; j < i; j++)
        {
            ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
        }
    }

    return ret;
}
// @lc code=end
