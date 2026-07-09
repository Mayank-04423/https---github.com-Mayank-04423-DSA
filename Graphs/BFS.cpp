#include <iostream>
#include<vector>
#include<queue>
using namespace std;

void runBFS(int startNode, vector<vector<int>>& adj, int V){
    vector<bool> visited(V,false);
    queue<int> q;

    //intialization 
    q.push(startNode);
    visited[startNode] = true;

    //traversal
    cout<<"BFS traversal : "<<"\n";
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";

        //looking at neighbours 
        for(int neighbour: adj[curr]){
            if(!visited[neighbour]){
                visited[neighbour]= true;   //marked visited instantly upon discovery else space use krega bekar mai 
                q.push(neighbour);
            }
        }
    }
    cout<<"\n";
}


int main() 
{
    int V = 4;
    vector<vector<int >> adj(V);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 3};
    adj[3] = {1, 2};

    runBFS(0,adj,V);

    return 0;
}