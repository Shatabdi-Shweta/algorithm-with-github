#include<bits/stdc++.h>
using namespace std;


int GCD(int m,int n)
{
    if(m==n)
    {
        return m;
    }
    else if(m>=n)
    {
        return GCD(m-n,n);

    }else{
        return(m,n-m);
    }
}

int main()
{
    cout<<"GCD :";
    cout<<GCD(28,6);
    return 0;
}
