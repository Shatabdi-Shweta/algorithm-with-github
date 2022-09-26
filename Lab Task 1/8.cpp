#include<bits/stdc++.h>
using namespace std;

int subtract(int *x)
{
    int sub=0;
    for(int i=0;i<4;i++)
    sub-=(x[i]-2);
    return sub;
}

int main()
{
    int x[]={3,4,5,6};
    cout<<"subtract:"<<subtract(x);
    return 0;
}
