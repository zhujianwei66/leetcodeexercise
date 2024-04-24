/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-21 22:58:36
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-21 23:04:58
 */
/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
{
    int index1 = 0, index2 = numbersSize - 1;
    int *ret = (int *)malloc(sizeof(int) * 2);
    while (index1 < index2)
    {
        int temp = numbers[index1] + numbers[index2];
        if (temp == target)
        {
            *returnSize = 2;
            ret[0] = ++index1;
            ret[1] = ++index2;
        }
        if (temp < target)
        {
            index1++;
        }
        else
        {
            index2--;
        }
    }
    return ret;
}
// @lc code=end
