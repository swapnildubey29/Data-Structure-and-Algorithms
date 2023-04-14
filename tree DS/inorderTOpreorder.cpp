//construct the BT from inorder to preorder;
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
  void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
  }
  int preindex = 0;
  node *ctree(int in[],int pre[],int is,int ie){
    if(is>ie) return NULL;
    node *root = new node(pre[preindex++]);
    
    int inindex;
    for (int i = is; i <=ie; i++)
    {
        if(in[i]==root->key){
            inindex = i;
            break;
        }
    }
      root->left = ctree(in,pre,is,inindex-1);
      root->right = ctree(in,pre,inindex+1,ie);
      return root; 
  }
    int main() {
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	int n=sizeof(in)/sizeof(in[0]);
	node *root=ctree(in, pre, 0, n-1);
	inorder(root);
}