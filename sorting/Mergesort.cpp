//2nd june,2022; merge two sorted array in an arr;
#include<iostream>
#include<algorithm>
using namespace std;

    void merge(int a[],int b[], int m, int n){
         int i = 0,j = 0;
         while(i<m && j<n){
             if(a[i]<b[i])
              cout<<a[i++]<<" ";
              else cout<<a[j++]<<" ";
         } while(i<m)
            cout<<a[i++]<<" ";
           while(j<n)
           cout<<b[j++]<<" ";
    }  
       int main(){
          int a[] = {10,20,50};
          int b[] = {5,50,50};
          int m = sizeof(a)/sizeof(a[0]);
          int n = sizeof(b)/sizeof(b[0]);
            merge(a,b,m,n);   
        return 0;
       }