//17th april,2022; @gfg_two stack in array(naive).
#include<bits/stdc++.h>
using namespace std;

struct twostack
{
    int *arr;
    int top1,top2,cap;
     
     twostack(int n){
        cap = n;
        arr = new int[n];
        top1 = n/2+1;
        top2 = n/2;
     }
    
      void push1(int x){
        if(top1 > 0){
            top1--;
            arr[top1] = x;
        }  else {
            cout<<"stack overflow"
                <<" By element :"<<x<<endl;
                return;
        }
      }

        void push2(int x){
             if(top2 < cap - 1){
                top2++;
                arr[top2] = x;
             } else{
                cout<<"Stack overflow"
                    <<" Byelement :"<<x<<endl;
                    return;
             }
        }

        int pop1(){
            if(top1 <= cap/2){
                int x = arr[top2];
                top1--;
                return x;
            }else{
                cout<<"Stack Underflow"<<endl;
                exit(1);
            }
        }

        int pop2(){
            if(top2 >= cap/2+1){
                int x = arr[top2];
                top2--;
                return x;
            } else{cout<<"Stack Underflow"<<endl;
                exit(1);   
            }
        }

};

    int main(){
        twostack ts(5);
        ts.push1(5);
        ts.push2(10);
        ts.push2(15);
        ts.push1(11);
        ts.push1(7);
        cout<<"pooped element from stack1 is:"<<ts.pop1()<<endl;
         cout<<"pooped element from stack2 is:"<<ts.pop2()<<endl;
        return 0;
    }