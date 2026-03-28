#include<bits/stdc++.h>
using namespace std;
int main()
{
   int v;
   cin>>v;
   int e;
   cin>>e;
   vector<pair<int, int>>edge;
   vector<int>nodes;  //shb value store kortese;
   for(int i=0; i<e; i++)
   {
       int u,x;
       cin>>u>>x;
       edge.push_back({u,x});
       nodes.push_back(u);
       nodes.push_back(x);
   }
   sort(nodes.begin(), nodes.end());
   nodes.erase(unique(nodes.begin(), nodes.end()), nodes.end());
   vector<vector<int>>adj(nodes.size());
   for(auto i: edge)
   {
       int u_dx=lower_bound(nodes.begin(), nodes.end(), i.first)-nodes.begin();
       int x_dx=lower_bound(nodes.begin(), nodes.end(), i.second)-nodes.begin();

       adj[u_dx].push_back(i.second);
       adj[x_dx].push_back(i.first);
   }
   for(int i=0; i<nodes.size(); i++)
   {
       cout<<nodes[i]<<" : ";
       for(int j:adj[i])
       {
           cout<<j<<" ";
       }
       cout<<endl;
   }
}
