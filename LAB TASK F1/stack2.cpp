#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>namestack;

    freopen("shweta.text.txt","r",stdin);

    string name;

    for(int i=0; i<3; i++)
    {
        cin>>name;
        namestack.push(name);
    }

    while(!namestack.empty()){
        cout<<namestack.top()<<endl;
        namestack.pop();
    }


    return 0;
}
