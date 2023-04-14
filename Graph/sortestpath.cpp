// shortest path in an unweighted graph.(BFS)
#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int>adj[],int v,int s,int dist[]){
    bool visited[v];
    for (int i = 0; i < v; i++)
         visited[i] = false;
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (q.empty()==false)
    {
        int u = q.front();
          q.pop();
          for(int v:adj[u]){
            if (visited[v]==false)
            {
                dist[v] = dist[u] +1;// update the distance
                visited[v] = true;
                q.push(v);
            }       
          }
    }  
}

  void addEdge(vector<int>adj[],int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int main(){
    int v = 4;
    	vector<int> adj[v];
	addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,0,2); 
	addEdge(adj,1,3);
    int dist[v];
    for(int i=0;i<v;i++){
        dist[i]=INT_MAX;
    }
	dist[0]=0;
	BFS(adj,v,0,dist); 
    
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }

	return 0; 
  }