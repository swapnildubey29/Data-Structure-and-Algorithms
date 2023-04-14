//11th may, 2022;
// check if array is sorted or not;

  #include<iostream>
  #include<cmath>
  using namespace std;
   bool issorted(int arr[],int n){
       for (int i = 0; i < n; i++)
       {
           if (arr[i]<arr[i-1])
               return false;         
       } return true;
   }
        int main(){
        int arr[]= {10,12,15,17,30},n=5;
        cout<<issorted(arr,n)?"true":"False";
            return 0;
        }