//10th july,2022; maxM in binary tree;
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left = right = NULL;
    }
};
   int printMax(Node *root){
    if(root==NULL) return INT_MIN;
    else { return max(root->key, max(printMax(root->left),printMax(root->right)));
    }
   }
    int main(){
        Node *root = new Node(20);
        root->left = new Node(80);
        root->right = new Node(30);
        root->right->left = new Node(40);
        root->right->right = new Node(50);
        cout<<printMax(root);
        return 0;
    }