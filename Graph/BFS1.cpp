// BFS= given an unsorted graph and a vertices;
#include<bits/stdc++.h>
using namespace std;

 void BFS(vector<int> adj[],int v,int s){
     bool visited[v];
     for (int i = 0; i < v; i++)
        visited[i] = false;
      
        queue<int> q;
      
      visited[s]  = true;
      q.push(s);
      while (q.empty() == false)
      {
        int u = q.front();
        q.pop();
        cout<< u <<" ";
        for (int v : adj[u])
        {
            if(visited[v]== false)
            {visited[v]  = true;
               q.push(v);
            }
        }
      }
 }

 void addedge(vector<int> adj[], int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
 }

 int main(){
    int v = 5;
    vector<int> adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,2,3);
    addedge(adj,1,3);
    addedge(adj,3,4);
    addedge(adj,2,4);

    cout<<"Following is breadth first traversal: "<<endl;
    BFS(adj,v,0);

    return 0;
 }