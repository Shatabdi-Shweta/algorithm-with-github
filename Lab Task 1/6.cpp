#include<bits/stdc++.h>
using namespace std;

int sum(int *x)
{
    int sum=0;
    for(int i=0;i<10;i++)
        sum+=x[i]*x[i];
    return sum;
}

int main()
{
    int x[]={1,2,3,4,5,6,7,8,9,10};
    cout<<"sum of the arrray:"<<sum(x);
    return 0;
}
