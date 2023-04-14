//30th may,2022; left rotate by d;
#include<iostream>
using namespace std;
   void lrotateone(int arr[],int n){
         int temp = arr[0];
         for (int i = 0; i < n; i++)
         {
             arr[i - 1] = arr[i];
         }
         arr[n-1] = temp;
   }
     void leftRotate(int arr[],int d, int n){
         for (int i = 0; i < d; i++)
         {
             lrotateone(arr,n);
         }
     }

int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 3;
      cout<<"Before Rotation"<<endl;
       for(int i = 0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }
       cout<<endl;
       leftRotate(arr, d, n);
       cout<<"After Rotation"<<endl;
       for(int i = 0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }  
}