//Bismillahirrahmanirrahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,ver;
    cin>>e>>ver;
    vector<int>adj[ver];
    int u,v;
   for(int i=0; i<e; i++)
   {
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   for(int i=0; i<ver; i++)
   {
       cout<<i<<"->";
       for(int j=0; j<adj[i].size(); j++)
       {
           cout<<adj[i][j]<<" ";
       }
       cout<<endl;
   }
}
