//5th may,2022;
// delete an array;

  #include<iostream>
  #include<cmath>
  using namespace std;

  int dlt(int arr[],int n, int x){
      for (int i = 0; i < n; i++)
      {
          if (arr[i]==x)
              break;
          if(i==n)
          return n;
          for (int j = i; i < n-1; j++)
          {
              arr[j] = arr[j+1];
              return n-1;
          }
      }
  }     
     int main(){
            int arr[] = {3, 8, 12, 5, 6}, x = 12, n = 5;
       cout<<"Before Deletion:"<<endl;
       for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }   
       cout<<endl;
       n = dlt(arr, n, x);
       cout<<"After Deletion:"<<endl;
       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
         return 0;
     }