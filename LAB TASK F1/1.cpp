#include<iostream>
using namespace std;

int *F(int c[],int n)
{
    int *p=new int[n];
    for(int i=0; i<n;i++)
    {
        p[i]=c[i]*2;
    }
    return p;
}

int main()
{
    int a[4]={10,20,30,40};
    int *k=F(a,4);

    for(int i=0;i<4;i++)
    {
        cout<<k[i]<<" ";
    }
    return 0;
}
