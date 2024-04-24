/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-24 22:48:13
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-24 22:55:00
 */
/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
int singleNumber(int *nums, int numsSize)
{
    for (int i = 1; i < numsSize; i++)
    {
        nums[0] = nums[0] ^ nums[i];
        // printf("ret = %d\n", ret);
    }
    return nums[0];
}
// @lc code=end
