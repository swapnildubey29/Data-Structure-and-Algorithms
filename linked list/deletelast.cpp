//10th june,2022; delete first node in singly linked list;
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
          Node* curr = head;
          while (head != NULL)
          {
            cout<<curr->data<<" ";
            curr = curr->next;
          } cout<<endl;
               
   }

      Node* deltail(Node* head){
        if(head == NULL) return NULL;
        if( head->next == NULL) delete head;
            return NULL;
           Node* curr = head;
           while (curr->next->next != NULL)
           {
               curr = curr->next;
               delete(curr->next);
               curr->next = NULL;
               return head;
           }
           

      }


            int main(){
              Node *head = new Node(10);
              head->next = new Node(20);
              head->next->next = new Node(30);
            head->next->next->next = new Node(40);
              printlist(head);
              head = deltail(head);
              printlist(head);
          return 0;
            }