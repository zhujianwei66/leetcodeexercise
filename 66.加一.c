/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-26 14:57:46
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-28 18:33:23
 */
/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    //计算一个数组+1要考虑进位的情况
    //所以从最后一位开始循环
    int i = 0;
    int flag = 1;                                          //进位
    int *ret = (int *)calloc(digitsSize + 1, sizeof(int)); //申请多一个空间

    for (i = digitsSize; i > 0; i--)
    {
        ret[i] = (digits[i - 1] + flag) % 10; //进行模10加法
        flag = digits[i - 1] + flag < 10 ? 0 : 1;
    }
    *returnSize = digitsSize + flag;
    if (flag != 0)
    {
        ret[0] = flag;
    }
    else
    {
        ret = ret + 1;
    }
    return ret;
}
// @lc code=end
