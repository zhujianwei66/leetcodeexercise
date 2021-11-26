/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-16 19:46:25
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-17 13:09:48
 */
/*
    * @lc app=leetcode.cn id=3 lang=c
    *
    * [3] 无重复字符的最长子串
    */
// @lc code=start

int lengthOfLongestSubstring(char *s)
{
    /*
    目标：从字符串中获取最小子串
    算法：滑动窗口
    */
    //取len记录了原字符串长度，head为头指针，rear为尾指针，cur_size为当前字符串长度，max_size为当前遇到的最大子串长度
    int len = strlen(s), head = 0, rear = 0, cur_size = 1, max_size = 0; //求字符串长度
    //当字符串长度大于1才会进入循环
    while (rear < len)
    {
        for (int i = head; i < rear; i++) //每轮遍历前子串
        {
            if (s[i] == s[rear]) //当遇到前字串与尾字串相同时
            {
                cur_size = rear - i;
                head = i + 1; //当前i指针位置为重复出现字符，取i+1保证字串中不存在重复字符
                break;        //当前面子串中出现重复字符就跳出
            }
        }
        if (max_size < cur_size) //比较当前子串长度是否最大长度，是则更新最大值
        {
            max_size = cur_size;
        }
        rear += 1;     //尾指针后移
        cur_size += 1; //当前子串暂时+1
    }
    return max_size;
}
// @lc code=end
