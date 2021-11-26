/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-19 17:24:26
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-19 20:33:33
 */
/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start

int reverse(int x)
{
    int reverse_num = 0;
    while (x != 0)
    {
        if (reverse_num < INT_MIN / 10 || reverse_num > INT_MAX / 10)
            return 0;
        reverse_num = x % 10 + reverse_num * 10;
        x /= 10;
    }
    return reverse_num;
}
// @lc code=end
