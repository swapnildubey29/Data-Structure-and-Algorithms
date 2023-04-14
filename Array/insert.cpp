//5th may,2022;
// insert an array;

#include<iostream>
#include<cmath>
using namespace std;

 int insert(int arr[],int n,int x,int cap,int pos){

    if(n==cap)
      return n;
      int index = pos -1;
      for (int i = n-1; i >= pos; i--)
      {
          arr[i+1] = arr[i];
      }
      arr[index] = x;
           return(n+1);
 } 
     int main(){
         int arr[5],cap=5,n=3;
         arr[0]=5;arr[1]=10;arr[2]=20;
           cout<<"before Insertion:";
           for (int i = 0; i < n; i++)
           {
               cout<<arr[i] <<" "<<endl;
           } int x=7,pos=2;
           n = insert(arr,n,x,cap,pos);
           cout<<"After insertion:"<<endl;
           for (int i = 0; i < n; i++)
           {
              cout<<arr[i]<<" ";
           }
         return 0;
     }