#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }

}

int main()
{
    cout<<"Fibonacci :";
    cout<<fibonacci(10);
    return 0;
}
