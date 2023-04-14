//left view of binary tree;
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
  int maxlevel = 0;
  void printLview(node *root,int level){
    if(root == NULL) return ;
    if(maxlevel<level){
        cout<<(root->key)<<" ";
        maxlevel = level;
    }
      printLview(root->left,level+1);
      printLview(root->right,level+1);
  }
  void printleftview(node *root){
       printLview(root,1);
  }

  int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(50);
    root->right->right = new node(60);
    root->left->left = new node(30);
    root->left->right = new node(30);
    printleftview(root);

  }