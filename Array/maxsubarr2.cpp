//max subarr[] sum(efficient);
#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n){
    int res= arr[0];
    int max_end = arr[0];
    for (int i = 0; i < n; i++)
    {
        max_end = max(max_end+arr[0],arr[i]);
        res = max(res,max_end);
    } 
    return res;
}
int main() {
	
     int arr[] = {1, -2, 3, -1, 2}, n = 5;
     cout<<maxsum(arr, n);
    
}