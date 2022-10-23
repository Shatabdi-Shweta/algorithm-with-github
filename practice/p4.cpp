#include<bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;

void selectionSort(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        int imin=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[imin])
                imin=j;
            swap(arr[i],arr[imin]);
        }
    }
}
int printData(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
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
    selectionSort(a,n);
    cout<<"selection sort:"<<endl;
    printData(a,n);
    cout<<endl;

     //////////////
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

    selectionSort(a,n);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-9;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << "sec" << endl;

return 0;

}

