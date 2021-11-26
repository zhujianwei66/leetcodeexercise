/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-17 16:31:13
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-17 17:06:42
 */
/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

// @lc code=start

int maxArea(int *height, int heightSize)
{
    int max_area = 0;
    int cur_area = 0;
    int left = 0, right = heightSize - 1;
    while (left < right)
    {

        if (height[left] > height[right])
        {
            cur_area = height[right] * (right - left);
            right--;
        }
        else
        {
            cur_area = height[left] * (right - left);
            left++;
        }

        if (max_area < cur_area)
        {
            max_area = cur_area;
        }
    }
    return max_area;
}
// @lc code=end
