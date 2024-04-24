/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-17 23:03:42
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-17 23:42:14
 */
/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start

int CharToInt(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    if (c == 'V')
    {
        return 5;
    }
    if (c == 'X')
    {
        return 10;
    }
    if (c == 'L')
    {
        return 50;
    }
    if (c == 'C')
    {
        return 100;
    }
    if (c == 'D')
    {
        return 500;
    }
    if (c == 'M')
    {
        return 1000;
    }
    return 0;
}

int romanToInt(char *s)
{
    int i = 0;
    int res = 0;
    int last_weight = 0;
    while (s[i] != '\0')
    {
        if (last_weight >= CharToInt(s[i]))
        {
            res += CharToInt(s[i]);
        }
        else
        {
            res = res - last_weight * 2 + CharToInt(s[i]);
        }
        printf("res = %d\n", res);
        last_weight = CharToInt(s[i]);
        i++;
    }
    return res;
}
// @lc code=end
