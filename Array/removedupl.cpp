//11th may, 2022;
// remove duplicate from an array;

#include<iostream>
#include<cmath>
using namespace std;

int remdups(int arr[],int n){
 int res = 1;
 for (int i = 0; i < n; i++)
 {
     if (arr[res - 1]!=arr[i])
     {
         arr[res] = arr[i];
         res++;
     }
 } return res;
}
   int main(){
       int arr[] = {10,20,20,30,30,30},n=6;
       cout<<"Before Removal"<<endl;
       for (int i = 0; i < n; i++)
       {
           cout<<arr[i]<<" ";
        } cout<<endl;
          n = remdups(arr,n);
          cout<<"After Removal"<<endl;
          for (int i = 0; i < n; i++)
          {
              cout<<arr[i]<<" ";
          }
          
   }