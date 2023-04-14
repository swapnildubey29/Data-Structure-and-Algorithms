// BFS= For finding connected components;
#include<bits/stdc++.h>
using namespace std;

void DFSRec(vector<int>adj[],int s,bool visited[]){
    visited[s] = true;
    for (int u : adj[s])
    {
        if(visited[u]==false)
          DFSRec(adj,u,visited);
    }
}
int DFS(vector<int> adj[],int v){
    int cnt = 0;
    bool visited[v];
    for(int i=0 ; i<v; i++) visited[i] = false;

    for (int i = 0; i < v; i++)
    {
         if(visited[i]==false){
            DFSRec(adj,i,visited);
            cnt++;
         }
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2);
	addEdge(adj,3,4);

	cout << "Number of connected components: "<< DFS(adj,V); 

	return 0; 
} 
