#include<bits/stdc++.h>
using namespace std;

int *mergeList(int *a,int *b,int m,int n)
{
    int *L=new int[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]>b[j])
        {
            L[k++]=b[j++];
        }
        else{
        L[k++]=a[i++];
        }
    }
    while(i<m)
    {
        L[k++]=a[i++];
    }
    while(j<n){
        L[k++]=b[j++];
    }
    return L;
}
void printList(int *p,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void Merge(int *A,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1],M[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=A[left+i];
    }
    for(int j=0;j<n2;j++)
    {
        M[j]=A[mid+1+j];
    }
    int  i=0,j=0,k=left;
    while(i<=n1-1 && j<=n2-1)
    {
        if(L[i]< M[j])
        {
            A[k++]=L[i++];
        }
    else
    {
        A[k++]=M[j++];
    }
    }
    while (i<=n1-1)
    {
        A[k++]=L[i++];
    }
    while(j<=n2-1)
    {
        A[k++]=M[j++];
    }
}

void MergeSort(int *A,int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        MergeSort(A,left,mid);
        MergeSort(A,mid+1,right);
        Merge(A,left,mid,right);
    }
}

int Partition(int *A,int start,int end)
{
    int pivot=A[end];
    int pIndex=start;
    for(int i=start; i<end; i++)
    {
        if(A[i]<pivot)
        {
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[end]);
    return pIndex;
}

void QuickSort(int *A,int start,int end)
{
    if(start<=end)
    {
        int pIndex=Partition(A,start,end);
        QuickSort(A,start,pIndex-1);
        QuickSort(A,pIndex+1,end);
    }
}
int main()
{
    int n=100;

    int *a=new int[n];
    ifstream fin("100-txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    cout<<"before sorting: "<<endl;
    printList(a,100);
   /* int a[]={2,5,6,8,10,12};
    int b[]={1,3,7,9,11};
    printList(a,6);
    printList(b,5);

    int *c=mergeList(a,b,6,5);
    cout<<"Merge list :"<<endl;
    printList(c,11);

    int d[]={2,1,7,6,4,9,3};
    //int size=sizeof(d)/sizeof(d[0]);*/
    MergeSort(a,0,99);
    cout<<"Merge sort :"<<endl;
    printList(a,100);

    QuickSort(a,0,99);
    cout<<"Quick sort :"<<endl;
    printList(a,100);

    return 0;


}
