/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-25 23:18:46
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-26 23:35:13
 */
/*
 * @lc app=leetcode.cn id=155 lang=c
 *
 * [155] 最小栈
 */

// @lc code=start

typedef struct
{
    int top;
    int min_top;
    int myStack[20000];
    int minStack[20000];
} MinStack;

MinStack *minStackCreate()
{
    MinStack *testStack = (MinStack *)malloc(sizeof(MinStack));
    memset(testStack, 0, sizeof(MinStack));
    testStack->minStack[testStack->min_top++] = INT_MAX;
    return testStack;
}

void minStackPush(MinStack *obj, int val)
{
    obj->myStack[obj->top++] = val;
    if (obj->minStack[obj->min_top - 1] > val)
    {
        obj->minStack[obj->min_top++] = val;
    }
    else
    {
        obj->minStack[obj->min_top] = obj->minStack[obj->min_top - 1];
        obj->min_top++;
    }
}

void minStackPop(MinStack *obj)
{
    obj->min_top--;
    obj->top--;
}

int minStackTop(MinStack *obj)
{
    return obj->myStack[obj->top - 1];
}

int minStackGetMin(MinStack *obj)
{
    return obj->minStack[obj->min_top - 1];
}

void minStackFree(MinStack *obj)
{
    obj->top = 0;
    obj->min_top = 0;
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);

 * minStackPop(obj);

 * int param_3 = minStackTop(obj);

 * int param_4 = minStackGetMin(obj);

 * minStackFree(obj);
*/
// @lc code=end
