//check for balance binary tree;
#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *left;
    node *right;
    node(int k){
        key = k;
        left = right = NULL;
    } 
};
 bool isbalanced(node *root){
    if(root==NULL) return 0;
    int lh = isbalanced(root->left);
    if(lh==-1) return -1;
    int rh = isbalanced(root->right);
    if(rh== -1) return -1;
    if(abs(lh-rh) >1) return -1;
    else return max(lh,rh) +1;
 }
 int main(){
 node *root = new node(18);
    root->left = new node(4);
    root->right = new node(20);
    root->right->left = new node(13);
    root->right->right = new node(70);
    cout<<isbalanced(root);

 }