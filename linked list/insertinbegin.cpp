//8th june,2022; insert at begining of single lined list;
 #include<bits/stdc++.h>
 using namespace std;

    struct node{
        int data;
        node * next;
        node(int x){
            data = x;
            next = NULL;
        }
    };  
      void printlist(node * head){
        node * curr = head;
        while (curr != NULL)
        {
            cout<<curr->data<<" ";
            curr = curr->next;
        }
      }
         node *insertbegin(node *head,int x){
          node * temp = new node(x);
          node->next = head;
          return temp;
      }

    int main(){
       node *head = NULL;
       head = insertbegin(head,40);
       head = insertbegin(head,30);
       head = insertbegin(head,20);
       head = insertbegin(head,10);
       printlist(head);
       return 0;
    }