/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-26 23:37:24
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-26 23:57:30
 */
/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=start
bool isValid(char *s)
{
    int stack_size = strlen(s);
    int stack_top = 0;
    char *myStack = (char *)malloc(stack_size * sizeof(char));
    memset(myStack, 0, stack_size * sizeof(char));
    int str_index = 0;
    while (s[str_index] != '\0')
    {
        if ((s[str_index] == '(') || (s[str_index] == '{') || (s[str_index] == '['))
        {
            myStack[stack_top++] = s[str_index];
        }
        else if ((s[str_index] == ')') && (stack_top > 0) && (myStack[stack_top - 1] == '('))
        {
            stack_top--;
        }
        else if ((s[str_index] == '}') && (stack_top > 0) && (myStack[stack_top - 1] == '{'))
        {
            stack_top--;
        }
        else if ((s[str_index] == ']') && (stack_top > 0) && (myStack[stack_top - 1] == '['))
        {
            stack_top--;
        }
        else
        {
            return false;
        }
        str_index++;
    }
    return stack_top == 0;
}
// @lc code=end
