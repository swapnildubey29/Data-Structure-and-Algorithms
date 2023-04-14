// trapping rain water;
#include<bits/stdc++.h>
using namespace std;
int getwater(int arr[],int n){
    int res = 0;
    for (int i = 0; i < n-1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax,arr[j]);
        }
        int rmax = arr[i];
         for (int j = 0; j < i; j++)
        {
            rmax = max(rmax,arr[j]);
        }
        res = res + (min(lmax,rmax)-arr[i]);
    }  return res;
}
  int main(){
    int arr[]={3,0,1,2,5},n=5;
    cout<<getwater(arr,n);
  }