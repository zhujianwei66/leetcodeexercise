/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-16 22:43:38
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-17 13:14:55
 */
/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    //两个正序数组合并
    int *mynums = (int *)calloc(nums1Size + nums2Size, sizeof(int)); //申请堆区空间
    int i = 0, j = 0;
    while (i < nums1Size && j < nums2Size)
    {
        nums1[i] > nums2[j] ? mynums[i + j] = nums2[j++] : mynums[i + j] = nums2[i++];
    }
    //合并后数组求中位数
}
// @lc code=end
