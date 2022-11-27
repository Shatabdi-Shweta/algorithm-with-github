#include<bits/stdc++.h>
using namespace std;
# define m 100
int **g=new int *[m];

int visited[m];
int dis[m];

void bfs(int n,int v)
{
    queue<int>Q;
    Q.push(v);
     visited[v]=1;
     dis[v]=0;

    while(!Q.empty())
          {
             int p=Q.front();

                Q.pop();
                cout<<p<<" ";
               for(int i=0; i<n; i++)
                {
                    if( g[p][i]==1)
                    {
                        int next=i;
                        if(visited[next]==0)
                        {
                            Q.push(next);
                            visited[next]=1;
                            dis[next]=dis[p]+1;
                        }
                    }
                }
          }


}


void printGraph(int **p,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

}
void addEdge(int u,int v)
{
    //g[u].push_back(v);
    //g[v].push_back(u);
    g[u][v]=g[v][u]=1;

}
void printDistance(int source,int n)
{
cout<<"distance from:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<source<<" to "<<i<<" --> "<<dis[i]<<endl;
    }
}

int main()
{
    int node,edge;
    cin>>node>>edge;

    for(int i=0; i<node; i++)
    {
        g[i]=new int[node];
    }

    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            g[i][j]=0;
        }
    }

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
    bfs(node,source);
    cout<<endl;
    printDistance(source,node);

    return 0;

}
/*
7 10
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

