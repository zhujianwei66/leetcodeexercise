/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-19 13:06:42
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-19 17:23:19
 */
/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */

// @lc code=start

int maxSubArray(int *nums, int numsSize)
{
    int pre = 0;           //应当初始化为0
    int max_sum = nums[0]; //同上
    for (int i = 0; i < numsSize; i++)
    {
        pre = fmax(nums[i] + pre, nums[i]); //计算当前最大值
        max_sum = fmax(max_sum, pre);
    }
    return max_sum;
}
// @lc code=end
