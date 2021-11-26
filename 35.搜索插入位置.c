/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-17 15:05:25
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-17 16:22:47
 */
/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

int searchInsert(int *nums, int numsSize, int target)
{
    //二分法
    // 1 2
    int head = 0;            //头标地址
    int rear = numsSize - 1; //尾标地址
    while (head < rear)
    {
        int median = head + rear + 1 >> 1; //位运算
        if (nums[median] > target)
        {
            rear = median - 1;
        }
        else if (nums[median] < target)
        {
            head = median;
        }
        else
        {
            //进入此处说明找到元素了
            return median;
        }
    }
    return nums[head] >= target ? head : head + 1;
}
// @lc code=end
