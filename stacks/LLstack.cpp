#include<bits/stdc++.h>
using namespace std;

 struct Node{     // linked list defined;
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = NULL;
        }
 };

  struct Mystack
  {
     Node* head;
     int sz;      //stack defined
     Mystack(){
        head = NULL;
        sz = 0;
     }
       
       void push(int x){
        Node *temp = new Node(x);
        head->next = head;
        head = temp;
        sz++;
       }

      int pop(){
        if(head==NULL){
            cout<<"stack is Empty"<<endl;
            return INT_MAX;
        }  int res = head->data;
        Node *temp = head;  //head = temp;
        head = head->next;   // new head = head->next;
        delete(temp);
        sz--;
        return res;
      }
       
       int peek(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return INT_MAX;
        }   return head->data;
       }

       int size(){
            return sz;
       }

         bool isempty(){
            return head==NULL;
         }
  };
  

  int main(){
    Mystack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isempty()<<endl;
 
 return 0;
  }