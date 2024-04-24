/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-23 22:52:54
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-23 23:49:18
 */
/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start
char mytolower(char c)
{
    char ret = '\0';
    if (c < 'a')
    {
        ret = c + 'a' - 'A';
    }
    else
    {
        ret = c;
    }
    return ret;
}
bool isCharOrNumber(char c)
{
    if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c <= '9' && c >= '0'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isPalindrome(char *s)
{
    int tear = strlen(s) - 1;
    int head = 0;
    while (head < tear)
    {
        while (head < tear && !isCharOrNumber(s[head]))
        {
            // printf("head no a char\n");
            head++;
        }
        while (head < tear && !isCharOrNumber(s[tear]))
        {
            // printf("tear no a char\n");
            tear--;
        }
        // printf("head = %d ,tear = %d\n",head,tear);
        if (head < tear && (mytolower(s[head]) != mytolower(s[tear])))
        {
            // printf("%c != %c\n", s[head], s[tear]);
            return false;
        }
        // printf("%c == %c\n", s[head], s[tear]);
        head++;
        tear--;
    }
    return true;
}
// @lc code=end
