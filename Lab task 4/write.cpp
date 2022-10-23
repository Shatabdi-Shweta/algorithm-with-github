#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()

{
    srand(time(0));
    freopen("100-txt.int","w",stdout);
    for(int i=0; i<1000; i++)
    {
        cout<<rand()%100<<" ";
    }
    return 0;
}
