#include<bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;

int printData(int *p,int n)
{
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void BubbleSort(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        int swapflag=0;
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
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
    int *a=new int[n];
    ifstream fin("100_txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    printData(a,n);
    BubbleSort(a,n);
    cout<<"Bubble Sort:"<<endl;
    printData(a,n);
    cout<<endl;
    //////////////
    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

    BubbleSort(a,n);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-9;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << "sec" << endl;

return 0;

}
