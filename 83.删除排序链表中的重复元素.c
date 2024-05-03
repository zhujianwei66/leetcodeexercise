/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-25 22:26:49
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-25 22:38:37
 */
/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }
    struct ListNode *p = head;
    struct ListNode *q = head;
    int last_val = p->val;
    p = p->next;
    while (p != NULL)
    {
        if (last_val == p->val)
        {
            q->next = p->next;
            free(p);
            p = q->next;
        }
        else
        {
            last_val = p->val;
            p = p->next;
            q = q->next;
        }
    }
    return head;
}
// @lc code=end
