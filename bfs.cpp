#include<bits/stdc++.h>
using namespace std;
vector<int>bfs(vector<vector<int>>&arr, int v)
{
    vector<bool>visited(v, false);
    vector<int>res;
    int s=0;
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        res.push_back(curr);
        for(int j:arr[curr])
        {
            if(!visited[j])
            {
                visited[j]=true;
                q.push(j);

            }
        }
    }
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
   vector<int>res=bfs(arr,v);
   for(int i=0; i<res.size(); i++)
   {
       cout<<res[i]<<" ";
   }
   cout<<endl;
}

