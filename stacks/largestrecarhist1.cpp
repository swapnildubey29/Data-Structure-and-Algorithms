//2nd may,2022;
//DSA @Gfg_largest rectangle area in a histogram naive code;

  #include<bits/stdc++.h>
  using namespace std;

     int getmaxarea(int arr[],int n){
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                int curr = arr[i];
                for (int j = i-1; j >= 0; j--)
                {
                    if(arr[j]>=arr[i])
                       curr += arr[i];
                       else break;
                }
                  for (int j = i+1; j < n; j++)
                  {
                     if(arr[j] >= arr[i]) 
                       curr += arr[i];
                         else break;
                  }
                      res = max(res,curr);
            }
                return res;
     }


      int main(){
        int arr[]={6,2,5,4,1,5,6};
         int n = 7;
         cout<<"max area:"<<getmaxarea(arr,n);
          return 0;
      }
 