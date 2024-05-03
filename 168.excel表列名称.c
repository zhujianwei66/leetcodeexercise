/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-27 21:42:51
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-27 23:14:38
 */
/*
 * @lc app=leetcode.cn id=168 lang=c
 *
 * [168] Excel表列名称
 */

// @lc code=start
void reverStr(char *str)
{
    int index_max = strlen(str);
    // printf("str = %s\n", str);
    for (int i = 0; i < index_max / 2; i++)
    {
        char temp = str[i];
        str[i] = str[index_max - 1 - i];
        str[index_max - 1 - i] = temp;
    }
    // printf("str = %s\n", str);
}

char *convertToTitle(int columnNumber)
{
    char *ret = (char *)malloc(sizeof(char) * 8);
    memset(ret, 0, sizeof(char) * 8);
    int index = 0;
    while (columnNumber > 0)
    {
        columnNumber --;
        ret[index++] = 'A' + columnNumber % 26;
        // printf("ret[%d] = %c, columnNumber = %d\n", index - 1, ret[index - 1], ret[index - 1] - 'A' + 1);
        columnNumber = columnNumber / 26;
        // printf("columnNumber = %d\n", columnNumber);
    }
    reverStr(ret);
    return ret;
}
// @lc code=end
