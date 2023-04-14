//11th may,2022;
// largest element in an array;

#include<iostream>
using namespace std;
 int getlargest(int arr[],int n){
     int res = 0;
     for (int i = 0; i < n; i++)
       if (arr[i]>arr[res])
           res = i;
           return res;
 }   
    int main(){
          int arr[]={5,8,20,10};
          cout<<getlargest(arr,4);
        return 0;
    }