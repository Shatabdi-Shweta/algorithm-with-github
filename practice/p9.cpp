
#include<bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;

int binerySearch(int *a,int l,int h,int x)
{
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(a[m]==x){
        return m;
        }else if(a[m]<x)
        {
            l=m+1;
        }else{
        h=m-1;
        }
    }
    return -1;
}
int printData(int *a,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" " ;
    }
    cout<<endl;
}


void BubbleSort(int *a,int s)
{
    for(int i=0;i<s;i++)
    {
        int swapflag=0;
        for(int j=0;j<s-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapflag=1;
            }
        }
        if(!swapflag)
            break;
    }
}

int main()
{
    int n=100;
    int *a=new int [n];
    ifstream fin("100_txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    printData(a,n);
    BubbleSort(a,n);
    cout<<"bubble sort:"<<endl;
    printData(a,n);
    cout<<endl;

    int item=900;

    //////////////
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
   int result=binerySearch(a,0,n-1,item);
    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-9;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << "sec" << endl;

    if(result==-1)
    {
        cout<<"not found"<<endl;
    }
    else{
        cout<<item<<" found at index  "<<result<<endl;
    }


return 0;

}
