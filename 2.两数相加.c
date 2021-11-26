/*
 * @Descripttion: 
 * @version: 
 * @Author: ZhuJianwei
 * @Date: 2021-11-16 17:41:40
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2021-11-16 19:46:31
 */
/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *p = l1;
    struct ListNode *q = l2;
    struct ListNode *pre = NULL;
    int temp = 0;    //进位
    int cur_sum = 0; //进位后剩余的值
    int sum = 0;     //直接求和得到的值
    while (p != NULL)
    {
        if (q != NULL)
        {                                 //l2链表非空
            sum = p->val + q->val + temp; //两值求和
            //temp = sum / 10;              //更新下次相加时的进位
            //cur_sum = sum % 10;
            //p->val = cur_sum;
            //p = p->next;
            q = q->next;
        }
        else
        {                        //l2链表已空
            sum = p->val + temp; //l2空后只省l1和进位
            //temp = sum / 10;
            //cur_sum = sum % 10;
            //p->val = cur_sum;
            //p = p->next;
        }
        temp = sum / 10;
        cur_sum = sum % 10;
        p->val = cur_sum;
        if (p->next == NULL) //当l1到尾部时先保存p
        {
            pre = p;
        }
        p = p->next;
    }
    pre->next = q;    //把l1尾赋给l2剩余部分（如果有的话）
    while (q != NULL) //l2剩余
    {
        sum = q->val + temp;
        temp = sum / 10;
        cur_sum = sum % 10;
        q->val = cur_sum;
        q = q->next;
        pre = pre->next;
    }
    if (temp)
    {
        pre->next = (struct ListNode *)calloc(1, sizeof(struct ListNode));
        pre->next->next = NULL;
        pre->next->val = temp;
        temp = 0;
    }
    return l1;
}
// @lc code=end
