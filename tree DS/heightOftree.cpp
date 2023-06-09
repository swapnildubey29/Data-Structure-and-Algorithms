//9th july,2022;height of binary tree;
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node (int k){
        key = k;
        left = right = NULL;
    }
};
 int height(Node *root){
    if(root==NULL){return 0;}
    else return (1+max(height(root->left),height(root->right)));
 }
   int main(){
    Node *root =  new Node(10);
    root->left = new Node(8);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout<<height(root);
    return 0;
   }