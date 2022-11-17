#include<bits/stdc++.h>
using namespace std;

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

void degreeCount(int **p,int n)
{
    int *d=new int[n];
    for(int i=0; i<n; i++)
    {
        d[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(p[i][j]==1)
            {
                d[i]++;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<"degree of "<<i<<" :"<<d[i]<<endl;
    }
}

int main()
{
    int node,edge;
    cin>>node>>edge;
    ///"dynamic memory allocation"///
    int **m=new int *[node];
    for(int i=0; i<node; i++)
    {
        m[i]=new int[node];
    }

    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            m[i][j]=0;
        }
    }

    int u,v;
    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;
        ///"undirected graph"///
       // m[u][v]=m[v][u]=1;
        ///"directed graph"///
        m[u][v]=1;
    }

    printGraph(m,node);
    degreeCount(m,node);

    return 0;
}

/*
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
4 6 */
