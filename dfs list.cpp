#include<bits/stdc++.h>
using namespace std;

void dfsrec(vector<vector<int>>&arr, vector<bool>&visited, int s, vector<int>&res)//s for starting node
{
    visited[s]=true;
  //  cout<<s<<" ";
  res.push_back(s);
    for(int j: arr[s])
    {
        if(!visited[j])
        {
            dfsrec(arr, visited, j, res);
        }
    }
}
vector<int>dfs(vector<vector<int>>&arr, int v)
{
  vector<bool>visited(v, false);
  vector<int>res;
  dfsrec(arr, visited, 0, res);
  return res;

}
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
       arr[u].push_back(x);
       arr[x].push_back(u);
   }
   vector<int>res=dfs(arr,v);
   for(int i=0; i<res.size(); i++)
   {
       cout<<res[i]<<" ";
   }
   cout<<endl;
}
