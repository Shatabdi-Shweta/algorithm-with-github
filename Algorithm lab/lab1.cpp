#include<bits/stdc++.h>
using namespace std;


void BubbleSort(int a[10],int n)
{

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        {
            if( a[i]>a[i+1])
            {
                int temp;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }

    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }

}


   void linearSearch(int a[100],int n)
   {

    for(int i=0;i<100;i++)
    {
        if(a[i]==n)
        {
            cout<<"THE number is founded : "<<a[i];
        }

    }
}


int main()

{


    srand(time(0));
    int n;
    cout<<"size:";
    cin>>n;
    int *a=new int[n];
    freopen("100-int.txt","r",stdin);
    //int a[1000];
    //int n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    BubbleSort(a,n);
    linearSearch(a,50);
}

