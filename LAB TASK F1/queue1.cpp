#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string>nameQueue;

    freopen("shweta.text.txt","r",stdin);

    string name;

    for(int i=0; i<3; i++){
        cin>>name;
        nameQueue.push(name);
    }

    while(!nameQueue.empty()){
        cout<<nameQueue.front()<<endl;
        nameQueue.pop();
    }

    return 0;
}
