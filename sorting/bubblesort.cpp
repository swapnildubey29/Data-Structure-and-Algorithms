//2nd june,2022; Bubble sort(optimized);
#include<iostream>
#include<algorithm>
using namespace std;

void Bubblesort(int arr[],int n){
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
}
   int main(){
      int arr[] = {2,1,3,4};
      Bubblesort(arr,4);
      for (int i = 0; i < 4; i++)
       cout<<arr[i]<<" ";
       return 0;
   }