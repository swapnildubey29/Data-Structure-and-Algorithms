//max subarr[] sum(naive);
#include<bits/stdc++.h>
using namespace std;
  int maxsum(int arr[],int n){
    int res =  arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr=0;
        for (int j = i; i < n; i++)
        {
            curr = curr + arr[i];
            res = max(res,curr);
        }
    }
     return res;
  }
int main() {
	
     int arr[] = {1, -2, 3, -1, 2}, n = 5;

     cout<<maxsum(arr, n);
    
}