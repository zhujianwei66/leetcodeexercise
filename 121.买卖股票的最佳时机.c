/*
 * @Descripttion:
 * @version:
 * @Author: ZhuJianwei
 * @Date: 2024-04-15 22:42:39
 * @LastEditors: ZhuJianwei
 * @LastEditTime: 2024-04-16 22:33:34
 */
/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
int maxProfit(int *prices, int pricesSize)
{
    int minprice = prices[0];
    int maxprofit = 0;
    for (int i = 0; i < pricesSize; i++)
    {
        if (minprice > prices[i])
        {
            minprice = prices[i];
        }
        else if (prices[i] - minprice > maxprofit)
        {
            maxprofit = prices[i] - minprice;
        }
    }
    return maxprofit;
}
// @lc code=end
