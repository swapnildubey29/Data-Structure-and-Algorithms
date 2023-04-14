//30th april,2022;
// @gfg_dsa_ previous greater element.....efficient code;

 #include<iostream>
 #include<stack>
 using namespace std;

 void prevgreater(int arr[],int n){
     stack<int> s;
     s.push(arr[0]);
     for (int i = 0; i < n; i++)
     {
        while (s.empty()==false && s.top()<=arr[i])
        
          s.pop();
          int pg=s.empty()?-1: s.top();
          cout<<pg<<" "<<endl;
          s.push(arr[i]);
     }
 }  
     int main(){
         
         int arr[]={20,30,10,5};
         int n = 4;
         prevgreater(arr,n);
         return 0;
     } 