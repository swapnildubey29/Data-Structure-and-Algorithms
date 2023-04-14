// 28th may,2022; square root_(naive code);

#include<iostream>
using namespace std;
 int sqroot(int x){
     int i = 1;
     while(i*i <= x)
     i++;
     return(i-1);
 }
   int main(){
     int x; cin>>x;
     cout<<sqroot(x);
       return 0;
   }