/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-27 15:57:03
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-27 21:41:38
 */
/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *pList1, *pList2;
    pList1 = headA;
    pList2 = headB;

    while (1)
    {
        if ((pList1 == NULL) && (pList2 != NULL))
        {
            pList1 = headB;
            // printf("pList1 change\n");
        }
        if ((pList2 == NULL) && (pList1 != NULL))
        {
            pList2 = headA;
            // printf("pList2 change\n");
        }
        if ((pList1 == NULL) && (pList2 == NULL))
        {
            // printf("pList1&pList2 end\n");
            return NULL;
        }
        if (pList1 == pList2)
        {
            break;
        }
        pList1 = pList1->next;
        pList2 = pList2->next;
    }
    return pList1;
}
// @lc code=end
