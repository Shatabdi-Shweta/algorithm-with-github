#include<bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;

int Partition(int *a,int start,int end)
{
    int pivot=a[end];
    int pIndex=start;
    for(int i=start;i<end;i++)
    {
        if(a[i]<pivot)
        {
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex],a[end]);
    return pIndex;
}
void quickSort(int *a,int start,int end)
{
    if(start<=end)
    {
        int pIndex=Partition(a,start,end);
        quickSort(a,start,pIndex-1);
        quickSort(a,pIndex+1,end);
    }
}
void printData(int *a,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n=100;
    int *a=new int[n];
    ifstream fin("100_txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    printData(a,n);
    quickSort(a,0,n-1);
    cout<<"quick sort:"<<endl;
    printData(a,n);
    cout<<endl;
   //////////////
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    quickSort(a,0,n-1);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-9;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << "sec" << endl;



return 0;

}
