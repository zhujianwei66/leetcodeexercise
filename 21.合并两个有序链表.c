/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2023-09-09 19:40:37
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-14 23:01:36
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
    ListNode *head, tear;
    head = list1;
    tear = list1;
    if (head == NULL) // list1 为空
    {
        if (list2 != NULL)
        {
            head = list2;
        }
    }
    else // list1 非空
    {
        while (list1 != NULL)
        {
            if (list2 != NULL)
            {
                if (list1.val > list2.val) // list2的节点小,
                {
                    tear->next = list2;
                    list2 = list2->next;
                }
                else // list1节点小
                {
                    tear->next = list1;
                    list1 = list1->next;
                }
                tear = tear->next;
            }
            else
            {
                break;
            }
        }
        if (p2 != NULL) // list2 非空
        {
            tear->next = p2;
        }
    }

    return head;
}
// @lc code=end
