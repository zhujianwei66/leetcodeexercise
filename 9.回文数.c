/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-19 20:54:08
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-20 11:42:31
 */
/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    char x_str[11] = "";
    sprintf(x_str, "%d", x);
    int i = 0, j = strlen(x_str) - 1;
    bool ans = true;
    while (i < j)
    {

        if (x_str[i] == x_str[j])
        {
            i++;
            j--;
        }
        else
        {
            ans = false;
            break;
        }
    }
    return ans;
}
// @lc code=end
