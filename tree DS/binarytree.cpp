//9th july,2022; binary tree;
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    } 
};
   void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    } 
   } 
   void preorder(Node *root){
    if(root!=0){
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
   }
    void postorder(Node *root){
     if(root!=0){
        preorder(root->left);
        preorder(root->right);
        cout<<(root->key)<<" ";
    } 
   }

 int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left =  new Node(40);
    root->left->right =  new Node(50);
    root->left->right->left =  new Node(70);
    root->left->right->right =  new Node(80);
    root->right->right = new Node(60);
    inorder(root); 
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
 }