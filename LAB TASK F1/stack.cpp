

#include<iostream>
#include<stack>
using namespace std;

int main()

{
    stack<int>s;
    stack<string>namestack;

    s.push(10);
    s.push(20);
    s.push(30);

    namestack.push("shatabdi");
    namestack.push("tanmay");
    namestack.push("sannidhya");

    //freopen("Shatabdi.text.txt","r",stdin);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;

    while(!namestack.empty()){
        cout<<namestack.top()<<endl;
        namestack.pop();
    }
    return 0;
}
