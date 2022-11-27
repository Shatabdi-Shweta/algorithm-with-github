#include<bits/stdc++.h>
using namespace std;

# define m 100
vector<int>g[m];
int visited[m];
int dis[m];

void BFS(int v)
{
    queue<int>Q;
    Q.push(v);
    visited[m]=1;
    dis[m]=0;
    while(!Q.empty())
    {
        int p=Q.front();
        Q.pop();
        cout<<p<<" ";
        for(int i=0; i<g[p].size(); i++)
        {
            int next=g[p][i];
            if(visited[next]==0)
            {
                Q.push(next);
                visited[next]=1;
                dis[next]=dis[p]+1;
            }
        }
    }
}

void printGraph(vector<int>p[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<"-->";
        for(int j=0; j<p[i].size(); j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

}

void addEdge(int u,int v)
{
    g[u].push_back(v);
    g[v].push_back(u);
}

void printDistance(int source,int n)
{
    cout<<"distance from :"<<endl;
     for(int i=0; i<n; i++)
     {
         cout<<source<<" to "<<i<<" --> "<<dis[i]<<endl;
     }
}

int main()
 {
     int node,edge;
     cin>>node>>edge;

     int u,v;
     for(int i=0; i<edge; i++)
     {
         cin>>u>>v;
         addEdge(u,v);
     }
     printGraph(g,node);
     int source;
     cout<<"enter source:";
     cin>>source;
     BFS(source);
     cout<<endl;
     printDistance(source,node);
     return 0;
 }

 /*
7 11
0 1
0 3
1 2
1 3
1 5
1 6
2 3
2 4
2 5
3 4
4 6


8 10
0 1
0 2
0 3
1 3
2 4
2 5
3 4
3 6
4 5
4 6
*/

