
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int v;
   cin>>v;
   int e;
   cin>>e;
   vector<vector<int>>mat(v, vector<int>(v,0));
   for(int i=0; i<e; i++)
   {
       int u,x;
       cin>>u>>x;
      //to ignore self loop for a simple graph
       if(u==x)
       {
           continue;

       }
       mat[u][x]=1;
      // mat[x][u]=1;


   }
   for(int i=0; i<v; i++)
   {
      for(int j=0; j<v; j++)
      {
          cout<<mat[i][j]<<" ";
      }
      cout<<endl;
   }
}
