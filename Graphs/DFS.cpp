#include <iostream>
#include<vector>
using namespace std;

//we'll make a dfs helper baad mai call krne ke lie 
void dfsHelper(int node,vector<vector<int>>& adj, vector<bool>& visited){
    visited[node] =true;
    cout<<node<<" ";

    //diving into first unvisited neighbor found 
    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            dfsHelper(neighbour,adj,visited); //recursive call -> pause current execution
        }
    }
}

void runDFS(int startNode, vector<vector<int>>& adj, int V){
    vector<bool>visited(V,false);
    //traversal
    cout<<"DFS traversal : "<<"\n";
    dfsHelper(startNode,adj,visited);
    cout<<"\n";
}


int main() 
{
    int V = 4;
    vector<vector<int>> adj(V);

    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 3};
    adj[3] = {1, 2};

    runDFS(0, adj, V);
    return 0;
}