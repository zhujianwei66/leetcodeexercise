/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2021-11-16 22:43:38
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-20 01:20:21
 */
/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    // 两个正序数组合并
    // printf("nums1Size = %d, nums2Size = %d\n", nums1Size, nums2Size);
    int *mynums = (int *)calloc(nums1Size + nums2Size, sizeof(int)); // 申请堆区空间
    int mynumsSize = 0;
    if (nums1Size == 0)
    {
        int k;
        for (k = 0; k < nums2Size; k++)
        {
            mynums[k] = nums2[k];
        }
        mynumsSize = k;
    }
    else if (nums2Size == 0)
    {
        int k;
        for (k = 0; k < nums1Size; k++)
        {
            mynums[k] = nums1[k];
        }
        mynumsSize = k;
    }
    else
    {
        int i = 0, j = 0;
        while (i < nums1Size && j < nums2Size)
        {
            // if (nums1[i] == nums2[j])
            // {
            //     j++;
            //     continue;
            // }
            if (nums1[i] < nums2[j])
            {
                mynums[mynumsSize] = nums1[i++];
            }
            else
            {
                mynums[mynumsSize] = nums2[j++];
            }
            mynumsSize++;
        }
        // printf("i = %d ,j = %d \n", i, j);
        if (i == nums1Size)
        {
            while (j < nums2Size)
            {
                mynums[mynumsSize++] = nums2[j++];
            }
        }
        if (j == nums2Size)
        {
            while (i < nums1Size)
            {
                mynums[mynumsSize++] = nums1[i++];
            }
        }
    }
    // for (int k = 0; k < mynumsSize; k++)
    // {
    //     printf("%d   ", mynums[k]);
    // }
    // printf("mynumsSize = %d\n", mynumsSize);
    if (mynumsSize % 2 != 0)
    {
        return mynums[mynumsSize / 2];
    }
    else
    {
        return (double)(mynums[mynumsSize / 2] + mynums[mynumsSize / 2 - 1]) / 2;
    }

    // 合并后数组求中位数
}
// @lc code=end
