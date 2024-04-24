/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-23 22:47:47
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-23 22:48:10
 */
/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start

int lengthOfLastWord(char *s)
{
    int index = 0;
    int is_word_flag = 0;
    int max_word_len = 0;
    // printf("len = %d,size = %d\n",strlen(s),sizeof(s));
    while (s[index] != '\0')
    {
        if ((s[index] <= 'z' && s[index] >= 'a') || (s[index] <= 'Z' && s[index] >= 'A'))
        {
            if (is_word_flag == 0)
            {
                max_word_len = 0; // 判断前面有空格说明上一次不是最后的单词，长度清零
            }
            max_word_len++;
            is_word_flag = 1;
        }
        else
        {
            is_word_flag = 0; // 遇到空格把单词flag置false
        }
        index++;
    }
    return max_word_len;
}
// @lc code=end
