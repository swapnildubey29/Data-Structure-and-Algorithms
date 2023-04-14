//30th may,2022, two pointer approch;
// given an sorted array which has sum of x is present or not;
#include<iostream>
using namespace std;

 bool ispresent(int arr[],int n,int sum){
   int left = 0, right = n-1;
   int mid;
   while (left <= right)
   {
      if(arr[left]+arr[right]==sum)
        return true;
      else if(arr[left]+arr[right] > sum)
        right--;
        else left++;
   }
     return false;
 }
    int main(){
    int arr[]= {2,3,7,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 14;
    cout<<ispresent(arr,n,sum);
        return 0;
    }