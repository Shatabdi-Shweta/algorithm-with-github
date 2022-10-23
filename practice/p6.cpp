#include<bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;

int *mergeList(int *a,int *b,int m,int n)
{
    int *l=new int[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]>b[j])
        {
            l[k++]=b[j++];

        }else{
            l[k++]=a[i++];
        }
        }
        while(i<m)
        {
            l[k++]=a[i++];
        }
        while(j<n)
        {
            l[k++]=b[j++];
        }
        return l;
}

void Merge(int *a,int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;

    int p[n1],q[n2];
    for(int i=0;i<n1;i++)
    {
        p[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        q[j]=a[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<=n1-1 && j<=n2-1)
    {
        if(p[i]<q[j])
        {
           a[k++]=p[i++];
        }
        else{
            a[k++]=q[j++];
        }
    }
    while(i<=n1-1)
    {
        a[k++]=p[i++];
    }
    while(j<=n2-1)
    {
        a[k++]=q[j++];
    }
}
void mergeSort(int *a,int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        Merge(a,l,m,r);
    }
}

void printData(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[]={1,4,7,9,10,23};
    int b[]={2,3,11,12,14};
    printData(a,6);
    printData(b,5);

    int *c=mergeList(a,b,6,5);
    cout<<"merge list:";
    printData(c,11);
    cout<<endl;

    int n=100;
    int *m=new int[n];
    ifstream fin("100_txt");
    for(int i=0;i<n;i++)
    {
        fin>>m[i];
    }
    printData(m,n);
    mergeSort(m,0,n-1);
    cout<<"merge sort:"<<endl;
    printData(m,n);
    cout<<endl;
     //////////////
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    mergeSort(m,0,n-1);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-9;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << "sec" << endl;



return 0;

}
