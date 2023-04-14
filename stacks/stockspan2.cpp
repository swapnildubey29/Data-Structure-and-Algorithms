//30th april,2022;
// @gfg_dsa_ stock span problem.....efficient code;

 #include<iostream>
 #include<stack>
 using namespace std;

 void stockspan(int arr[],int n){
     stack<int> s;              //create stack;
     s.push(0);
     cout<<1<<""<<endl;              // process first item;
     for (int i = 1; i < n; i++)
     {
         while (s.empty()==false && arr[s.top()]<= arr[i])
         {
             s.pop();
         } int span = s.empty() ? i+1 : i-s.top();
         cout<<span<<""<<endl;
         s.push(i);
     }
 }
   
   int main(){
       int arr[]= {18,12,13,14,11,16};
       int n = 6;
       stockspan(arr,n);
       return 0;
   }