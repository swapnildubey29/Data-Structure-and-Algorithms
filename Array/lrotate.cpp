//27th may,2022; @gfg_left rotate an array by d;

#include<iostream>
using namespace std;
 
 void lrotated(int arr[],int n,int d){
         int temp[d],i;
     for ( i = 0; i < d; i++)
     {
          temp[i] = arr[i];
     }
     for ( i = 0; i < n; i++)
     {
         arr[i-d] = arr[i]; 
     }
     for ( i = 0; i < d; i++)
     {
         arr[n-d+i] = temp[i];
     }
 }


int main(){
      int arr[]={1,3,5,7,9},n=5,d=2;
      cout<<"Before rotation: "<<endl;
      for (int i = 0; i < n; i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
      lrotated(arr,n,d);
      cout<<"After d rotation: "<<endl;
     for (int i = 0; i < n; i++)
      {
          cout<<arr[i]<<" ";
      }
            

    return 0;
}