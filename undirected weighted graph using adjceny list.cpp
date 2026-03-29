//bismillahirrahmanirrahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int, int>> adjlist[v];
    int u,vi, weight;
    for(int i=0; i<e; i++)
    {
        cin>>u>>vi>>weight;
        adjlist[u].push_back(make_pair(vi, weight));
        adjlist[vi].push_back(make_pair(u, weight));
    }
    for(int i=0; i<v; i++)
    {
        cout<<i<<" "<<"->";
        for(int j=0; j<adjlist[i].size(); j++)
        {

            cout<<adjlist[i][j].first<<" "<<adjlist[i][j].second<<" ";
        }
        cout<<endl;
    }

}
