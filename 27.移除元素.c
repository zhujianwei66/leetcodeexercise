/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start

int removeElement(int *nums, int numsSize, int val)
{
    //类似插入排序的移动
    int count = 0;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        if (nums[i] == val)
        { //交换两数，借用val值实现
            nums[i] = nums[numsSize - count - 1];
            nums[numsSize - count - 1] = val;
            count++;
        }
    }
    return numsSize - count;
}
// @lc code=end
