//Bismillahirrahmanirrahim
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<int>>adj(vertex, vector<int>(vertex,0));  // size is vertex size and row and coln. is initialized to 0
    int u,v, weight;
    for(int i=0; i<edges; i++)
    {
        cin>>u>>v>>weight;
        /*
        adj[u][v]=1;// undirected unweighted
        adj[v][u]=1;// undirrected unweighted
        */
        adj[u][v]=weight;
        adj[v][u]=weight;
    }
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
