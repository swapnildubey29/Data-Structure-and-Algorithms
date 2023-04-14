//10th june,2022; searching in singly linked list(Recursive);
#include<bits/stdc++.h>
using namespace std;

 struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
 };
   void printlist(node* head){
    node* curr = head;
    while (curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
     cout<<endl;
   }
  
  int search(node* head,int x){
    if(head==NULL) return -1;
    if(head->data==x)  return 1;
    else{
        int res = search(head->next,x);
        if(res == -1) return -1;
        else return res+1;
    }
  }

  int main(){
    node* head = new node(10);
    head->next = new  node(20);
     head->next->next = new node(30);
     head->next->next->next = new node(40);
        cout<<"The Linked list: "<<endl;
     printlist(head);
     cout<<"postion of element in linked list: "<<search(head,30);

     return 0;

  }