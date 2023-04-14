//2nd june,2022; Selection sort(optimized);
#include<iostream>
using namespace std;

void Selectionsort(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
       int min_ind = i;

       for(int j=i+1; j<n; j++)
       if(arr[j] < arr[min_ind])
       min_ind = j;

       swap(arr[i],arr[min_ind]);
   }
}
   int main(){
      int arr[] = {2,1,3,4};
      Selectionsort(arr,4);
      for ( int i = 0; i < 4; i++)
      {
          cout<<arr[i]<<" ";
      }
      
       return 0;
   }