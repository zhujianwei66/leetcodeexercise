/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-18 22:51:08
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-19 11:27:04
 */
/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start

int removeDuplicates(int *nums, int numsSize)
{
    //需要有序删除，不可以直接插入
    //通过数组后移实现对元素的后移
    int i = numsSize - 1, j;
    for (j = i; j > 0; j--)
    {
        if (nums[j] == nums[j - 1]) //取j和j-1方便检查保留区数组最后一位是否是重复元素
        {
            //交换
            int temp = nums[j]; //记录需要移除的值
            int flag = j;
            while (flag < i)
            {
                //数组整体前移动
                nums[flag] = nums[flag + 1];
                flag++;
            }
            nums[i--] = temp; //插入，并使移除区+1
            //移除数+1
            numsSize--;
        }
    }
    return numsSize;
}
// @lc code=end
