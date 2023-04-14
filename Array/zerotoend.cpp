//12th may,2022;
// move zero to end of the array;

#include<iostream>
using namespace std;
  void movezero(int arr[],int n){
           for (int i = 0; i < n; i++)
     {    if (arr[i]==0){
         for (int j = i+1; j < n; j++)
         
              if (arr[i]!=0)     
                   swap(arr[i],arr[j]); 
                    cout<<arr[i]<<" ";
     } 
  } 
  }
int main(){
     int arr[]={10,8,0,0,12,0};
     int n =6;
      movezero(arr,n);
    return 0;
}