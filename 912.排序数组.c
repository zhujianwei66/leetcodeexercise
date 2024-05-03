/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-28 23:00:50
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-28 23:57:46
 */
/*
 * @lc app=leetcode.cn id=912 lang=c
 *
 * [912] 排序数组
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortArray(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    int step = numsSize / 2;
    while (step > 0)
    {
        //!
        for (int i = step; i < numsSize; ++i)
        {
            int tmp = nums[i];
            int j = i - step;
            while (j >= 0 && tmp < nums[j])
            {
                nums[j + step] = nums[j];
                j -= step;
            }
            nums[j + step] = tmp;
        }
        step = step / 2;
    }
    return nums;
}
// @lc code=end
