// Next greater element of the stack( Naive); 
//   25th december,2022;
#include <bits/stdc++.h>
using namespace std;

void nextGreater(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n)
            cout<<-1<<" ";
    }
}

int main() 
{ 
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    nextGreater(arr,n);
    return 0; 
}