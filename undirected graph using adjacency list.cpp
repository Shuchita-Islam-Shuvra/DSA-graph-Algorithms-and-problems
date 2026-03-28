
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int v;
   cin>>v;
   int e;
   cin>>e;
   vector<vector<int>>arr(v);
   for(int i=0; i<e; i++)
   {
       int u,x;
       cin>>u>>x;
       if(u==x) continue;
       arr[u].push_back(x);
       //arr[x].push_back(u);

   }
   for(int i=0; i<v; i++)
   {
       cout<<i<<" ";
       for(int j:arr[i])
       {
           cout<<j<<" ";
       }
       cout<<endl;
   }
}
