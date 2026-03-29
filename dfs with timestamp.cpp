
//Bismillahirrahmanirrahim
#include<bits/stdc++.h>
using namespace std;

void visit(vector<int>adjlist[], int src, vector<int>&p, int& time, vector<int>&finish_time, vector<int>& visit_time)
{
  //  vector<int>visit_time;
    //vector<int>finish_time;
  visit_time[src]=time;
  time++;
    p[src]=1;
    for(int j: adjlist[src])
    {
        if(p[j]==0)
        {
            visit(adjlist, j, p, time, finish_time, visit_time);
        }
    }

            p[src]=2;
            finish_time[src]=time;
            time++;


}
int main()
{
    int e,v;
    cin>>e>>v;
    vector<int>adjlist[v];
    int u,w;
    for(int  i=0; i<e; i++)
    {
        cin>>u>>w;
        adjlist[u].push_back(w);
    }
    vector<int>p(v,0);// intially all vertex white
    vector<int> finish_time(v,0);
    vector<int> visit_time(v,0);
    int src;
    cin>>src;
    int time=0;
    visit(adjlist, src, p, time, finish_time, visit_time);
    for(int i=0; i<v; i++)
    {
        cout<<i<<" "<<visit_time[i]<<" "<<finish_time[i]<<endl;
    }
}
