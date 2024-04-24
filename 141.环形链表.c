/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-24 22:57:30
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-24 23:26:24
 */
/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }
    struct ListNode *fast = head->next;   //如果都赋值head会直接就return false
    struct ListNode *slow = head;
    while (slow != fast) //不能通过值判断为同一个节点，要用指针地址判断
    {
        if(fast == NULL ||fast->next == NULL)
        {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
        printf("slow %x ,fast %x\n",slow,fast);
    }
    return true;
}
// @lc code=end
