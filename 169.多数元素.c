/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-22 22:01:17
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-22 23:17:14
 */
/*
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 多数元素
 */

// @lc code=start
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partion(int arr[], int low, int high)
// {
//     int i = low - 1;
//     for (int j = low; j < high; j++)
//     {
//         // printf("i = %d, j = %d\n", i, j);
//         // printf("arr[j] = %d,arr[high] = %d\n", arr[j], high);
//         if (arr[j] <= arr[high])
//         {
//             // printf("a = %d,b = %d\n", arr[j], arr[high]);
//             i++;
//             swap(&arr[j], &arr[i]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return i + 1;
// }

// void myqsort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pivotIndex = partion(arr, low, high);

//         myqsort(arr, low, pivotIndex - 1);
//         myqsort(arr, pivotIndex + 1, high);
//     }
// }
int int_cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int majorityElement(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), int_cmp);
    // myqsort(nums,0,numsSize-1);
    return nums[numsSize / 2];
}
// @lc code=end
