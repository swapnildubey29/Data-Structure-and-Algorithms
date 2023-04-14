//19th april, 2021
// implimenting k stacks_@gfg;
#include<bits/stdc++.h>
using namespace std;

  struct kstacks{
    int *arr,*top,*next,
         cap,k, freetop;

         kstacks(int k1,int n){
            k = k1; cap = n;
            arr = new int [cap];
            top = new int [k];
            next = new int[cap];

            for (int i = 0; i < k; i++)
                top[i] = -1;
               freetop = 0;
               for (int i = 0; i < cap -1; i++)
                 next[i] = i+1;
                 next[cap - 1] = -1;
         }

         bool isfull(){ return (freetop == -1);}

         bool isempty(int sn) { return (top[sn] == -1);}

         void push(int x, int sn){
            if(isfull()){
                cout<<"stack overflow"<<endl;
                   return ;
            }
            int i = freetop;
            freetop = next[i];
            next[i] = next[sn];
            top[sn] = i;
            arr[i] = x;
         }

      int pop(int sn){
        if(isempty(sn)){
            cout<<"stack underflow"<<endl;
            return INT_MAX;
        }
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freetop;
        freetop = i;
        return arr[i];
      }
  };


   int main(){
       int k = 3, n = 10;
       kstacks ks(k,n);

       ks.push(15,2);
       ks.push(45,2);

       ks.push(17,1);
       ks.push(49,1);
       ks.push(39,1);

       ks.push(11,0);
       ks.push(9,0);
       ks.push(7,0);

       cout<<"popped element from stack 2 is "<< ks.pop(2)<<endl;
       cout<<"popped element from stack 1 is "<< ks.pop(1)<<endl;
       cout<<"popped element from stack 0 is "<< ks.pop(0)<<endl; 
    return 0;
   }

 