// stocl buy and sell(efficient);
#include<bits/stdc++.h>
using namespace std;
 int maxprofit(int price[],int n){
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i]>price[i-1])
        {
           profit +=(price[i]-price[i-1]);
        }
        
    }
      return profit;
 }
 int main(){
    int price[]={1,5,3,8,12},n=5;
   cout<<maxprofit(price,n);
 }