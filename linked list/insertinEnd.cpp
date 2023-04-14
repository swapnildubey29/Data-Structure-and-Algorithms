//8th june,2022; insert at end of the single linked list;
#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node* next;
     Node(int x){
        data = x;
        next = NULL;
     }
};
   void printlist(Node* head){
          Node * curr = head;
          while (curr != NULL)
          {
            cout<<curr->data<<" ";
            curr = curr->next;
          }
   }
      Node *insertEnd(Node * head, int x){
        Node* temp = new Node(x);
        if(head == NULL){return temp;}
        Node * curr = head;
        while (curr->next != NULL)
        {                                  // traversing linked list to the last node.
             curr = curr->next;                
        }
            curr->next  = temp;
            return head;
      }


        int main(){
        Node *head = NULL;
        head = insertEnd(head,10);
        head = insertEnd(head,20);
        head = insertEnd(head,30);
        head = insertEnd(head,40);
        printlist(head);
            return 0;
        }