//30th may,2022, search a peak element in an array;
#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
   int low = 0 , high = n-1;
   while (low <= high)
   {
       int mid = (low + high) / 2;
       if ((mid==0 || arr[mid-1]<=arr[mid]) &&
       (mid == n-1 || arr[mid+1]<=arr[mid]))
           return mid;
           if(mid > 0 && arr[mid-1]>= arr[mid] )
            high = mid - 1;
            else low = mid + 1;
   }
   return -1;
}  
    int main(){
     int arr[] = {10,12,15,17,23,90,67}, n = 7;
     cout<<peakelement(arr,n);
        return 0;
    }