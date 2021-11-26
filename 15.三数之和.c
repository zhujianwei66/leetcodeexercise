/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-17 17:08:30
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-18 20:41:51
 */
/*
 * @lc app=leetcode.cn id=15 lang=c
 *
 * [15] 三数之和
 */

// @lc code=start

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
//排序规则
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int **threeSum(int *nums, int numsSize, int *returnSize, int **returnColumnSizes)
{
    //对数组排序
    qsort(nums, numsSize, sizeof(int), cmp);
    int i = 0, j = 0, k = 0, sum = 0;
    *returnSize = 0;
    //最大空间的确定
    //极限情况下，第i轮有(numsSize-i)/2个(i>0)
    //共有numsSize-2轮
    //所以求和得
    //(numsSize-1)/2+(numsSize-2)/2....+(numsSize-numsSize+2)/2
    //1/4*(2+numsSize-1)*(numsSize-2)
    //1/4*(numsSize+1)*(numsSize-2)
    //确定上界，比它大都行
    //由于不需要太精确，所以可以把1/4乘进括号内得
    //(numsSize+1/4)*(numsSize-1/2)
    //由于c语言的下取整，可直接取numsSize*numsSize
    //我试过测试集内不存在这么极限的情况，即便是(numsSize-2)*(numsSize-2)也能ac
    int **ret = (int **)calloc(numsSize * numsSize, sizeof(int *));          //为返回数组申请空间
    *returnColumnSizes = (int **)calloc(numsSize * numsSize, sizeof(int *)); //为返回数组大小申请空间
    while ((i < numsSize - 2) && (nums[i] <= 0))
    {
        if (numsSize < 3)
        { //数组不足3个元素
            return NULL;
        }
        j = i + 1, k = numsSize - 1;
        while (j < k)
        {
            sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                //printf("记录：%d %d %d\n", nums[i], nums[j], nums[k]);
                ret[*returnSize] = (int *)calloc(3, sizeof(int));
                ret[*returnSize][0] = nums[i];
                ret[*returnSize][1] = nums[j];
                ret[*returnSize][2] = nums[k];
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;
                //去重
                while ((j < k) && (nums[j] == nums[++j]))
                    ;
                while ((j < k) && (nums[k] == nums[--k]))
                    ;

                //去除重复的ii
                //i应该小于numsSize-2,防止后面越界
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        while ((i < numsSize - 2) && nums[i] == nums[++i])
            ;
        //printf("%d %d %d\n", nums[i], nums[j], nums[k]);
        //保证循环
    }
    return ret;
}
// @lc code=end
