// 24th december/ 2022;
#include<bits/stdc++.h>
using namespace std;

struct Mystack{
    int *arr;
    int cap, top;

       Mystack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }
     
     void push(int x){
        if(top== cap -1){
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top] = x;
     }

      int pop(){
        if (top == -1)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }  
         int res =  arr[top];
           top--;
          return res;
      }

   int peek(){
        if(top==-1){cout<<"Stack is Empty"<<endl;
        return INT_MIN;}
        return arr[top];
      }  
     int size(){
        return top + 1;
     }
      
      bool isempty(){
        return top = -1;
      }
};

  int main(){
    Mystack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;

   return 0;
  }