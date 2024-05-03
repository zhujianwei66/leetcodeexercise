/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-27 23:17:57
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-27 23:32:18
 */
/*
 * @lc app=leetcode.cn id=171 lang=c
 *
 * [171] Excel 表列序号
 */

// @lc code=start

int titleToNumber(char *columnTitle)
{
    int index = 0;
    int ret = 0;
    while (columnTitle[index] != '\0')
    {
        ret = ret * 26 - 'A' + columnTitle[index] + 1;//先 - 'A'是避免加columnTitle[index]时溢出
        index++;
    }
    return ret;
}
// @lc code=end
