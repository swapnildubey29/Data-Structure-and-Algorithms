//11th may,2022;
// left rotate an array by one;
#include<iostream>
#include<cmath>
using namespace std;
int lrotateone(int arr[],int n){
     int temp = arr[0];
     for (int i = 0; i < n; i++)
     {
         arr[i-1] = arr[i];
     }  arr[n-1] = temp;
}
     int main(){
          int arr[]={1,2,3,4,5},n=5;
          cout<<"Before Rotation:"<<endl;
          for (int i = 0; i < n; i++)
          {
              cout<<arr[i]<<" ";
          }  cout<<endl;
            cout<<"After Rotation:"<<endl;
             lrotateone(arr,n);
             for (int i = 0; i < n; i++)
          {
              cout<<arr[i]<<" ";
          }
         return 0;
     }