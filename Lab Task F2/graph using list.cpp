#include<bits/stdc++.h>
using namespace std;

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

void degreeCount(vector<int>p[],int n)
{
    int *d=new int[n];
    for(int i=0; i<n; i++)
    {
        d[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        d[i]=p[i].size();
    }
    for(int i=0; i<n; i++)
    {
        cout<<"degree of "<<i<<" :"<<d[i]<<endl;
    }
}

int main(int node,int edge)
{
    cin>>node>>edge;
    vector<int> *m=new vector<int>[node];
    int u,v;
    for(int i=0; i<edge; i++)
    {
       cin>>u>>v;
       ///"for undirected graph"///
      /* m[u].push_back(v);
       m[v].push_back(u);*/
       ///""for directed graph"///
       m[u].push_back(v);
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
