/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2023-09-09 19:40:37
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-27 01:10:53
 */
/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL)
    {
        // printf("list1 is NULL\n");
        return list2;
    }
    if (list2 == NULL)
    {
        // printf("list2 is NULL\n");
        return list1;
    }
    struct ListNode *p_1, *p_2, *last, *ret;
    if (list1->val > list2->val)
    {
        ret = list2;
        p_2 = list1;
    }
    else
    {
        ret = list1;
        p_2 = list2;
    }
    last = ret;
    // printf("%d\n", last->val);
    p_1 = ret->next;

    while ((p_1 != NULL) && (p_2 != NULL))
    {
        if (p_1->val <= p_2->val)
        {
            // printf("p_1 small\n");
            last = p_1;
            p_1 = p_1->next;
        }
        else
        {
            // printf("p_2 small\n");
            last->next = p_2;
            p_2 = p_2->next;
            last->next->next = p_1;
            last = last->next;
        }
    }
    printf("%d\n", last->val);
    if (p_1 == NULL)
    {
        // printf("p_1 is NULL\n");
        last->next = p_2;
    }

    return ret;
}
// @lc code=end
