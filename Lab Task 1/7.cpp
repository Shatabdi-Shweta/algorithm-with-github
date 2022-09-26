#include<bits/stdc++.h>
using namespace std;

int sum(int *x)
{
    int sum=0;
    for(int i=0;i<5;i++)
        sum+=(x[i]*x[i]+5);
    return sum;
}

int main()
{
    int x[]={1,2,3,4,5};
    cout<<"sum :"<<sum(x);
    return 0;
}
