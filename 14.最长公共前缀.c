/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-18 23:03:52
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-18 23:21:10
 */
/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
char *longestCommonPrefix(char **strs, int strsSize)
{
    int index = 0;
    // printf("strsSize = %x \n", strsSize);
    while (strs[0][index] != '\0')
    {
        for (int i = 1; i < strsSize; i++)
        {
            if (strs[i][index] != strs[0][index])
            {
                // printf("i = %x, index = %x\n", i, index);
                strs[0][index] = '\0';
                return strs[0];
            }
        }
        index++;
    }
    return strs[0];
}
// @lc code=end
