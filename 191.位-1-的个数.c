/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-29 23:11:13
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-29 23:17:16
 */
/*
 * @lc app=leetcode.cn id=191 lang=c
 *
 * [191] 位1的个数
 */

// @lc code=start
int hammingWeight(int n)
{
    int count = 0;
    do
    {
        if (n & 0x1)
        {
            count++;
        }
        n = n >> 1;
        // printf("%x \n", n);
    } while (n);
    return count;
}
// @lc code=end
