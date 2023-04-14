//convert binary tree into DLL;
#include<iostream>
using namespace std;
struct node{
    int key;
    node *left;
    node *right;
    node(int k){
        key = k;
        left=right= NULL;
    }
};
    node *BTtoDLL(node *root){
        node *prev;
        if(root==NULL) return root;
        node *head = BTtoDLL(root->left);
        if(prev==NULL) {head = root;}
         else{ root->left = prev;
               prev->right = root;
               prev = root;
               BTtoDLL(root->right);
               return head;
         }
    }
    int main(){
        node *root = new node(10);
        root->left = new node(5);
        root->right = new node(20);
        root->right->left = new node(30);
        root->right->right = new node(35);
        cout<<BTtoDLL(root);
    }