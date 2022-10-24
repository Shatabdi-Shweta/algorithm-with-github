#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    freopen("100-int.txt","w",stdout);
    for(int i=0;i<10000;i++)
    {
        cout<<rand()%100+1<<" "<<endl;
    }
    return 0;
}

