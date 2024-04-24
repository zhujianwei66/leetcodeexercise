/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-28 18:39:58
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-28 19:23:37
 */
/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    //时间复杂度O(m+n),空间复杂度O(1)
    int i = nums1Size - 1; //新数组的大小
    m -= 1;                //nums1的数组大小
    n -= 1;                //nums2的数组大小
    while (m >= 0 && n >= 0)
    {
        nums1[i--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
    }
    while (m >= 0)
    {
        nums1[i--] = nums1[m--];
    }
    while (n >= 0)
    {
        nums1[i--] = nums2[n--];
    }
}
// @lc code=end
