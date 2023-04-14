//5th may, 2022;
// search unsorted array;

#include<iostream>
#include<cmath>
using namespace std;

int search(int arr[],int n,int x){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        
            return i;
    }        return -1 ;
}
   int main(){
       int arr[] = {20,5,7,25};
       int x = 5;
       cout<<search(arr,4,x);
   }