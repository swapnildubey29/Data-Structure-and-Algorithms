// stock buy and sell(naive);
#include<bits/stdc++.h>
using namespace std;
 int maxprofit(int price[],int start,int end){
    if(end<=start) return 0;
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i+1; j <= end; j++)
        {
            if (price[j]>price[i])
            {
                int curr_profit = price[j]-price[i]+
                                  maxprofit(price,start,i-1)+
                                  maxprofit(price,j+1,end);
                profit = max(profit, curr_profit);
            }
        }
    } return profit;
 }
 int main(){
    int price[] = {1,5,3,8,12},n=5;
    cout<<maxprofit(price,0,n-1);
 }