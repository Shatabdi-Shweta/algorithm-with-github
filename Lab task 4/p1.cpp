#include<bits/stdc++.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <chrono>
using namespace std::chrono;
using namespace std;


void display(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void BubbleSort(int *array,int size)
{
    for(int i=0; i<size;i++)
    {
        int swapflag=0;
        for(int j=0; j<size-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
                swapflag=1;
            }
        }
        if(!swapflag)
            break;
    }
}

void SelectionSort(int *array,int size)
{
    for(int i=0;i<size-1;i++)
    {
        int imin=i;
        for(int j=i+1;j<size;j++)
            if(array[j]<array[imin])
            imin=j;
        swap(array[i],array[imin]);
    }
}

void InsertionSort(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int key=array[i];
        int j=i-1;
        while(j>=0 && array[j]>=key)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
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

    BubbleSort(a,100);
    cout<<"Bubble sort  :"<<endl;
    display(a,100);
    SelectionSort(a,100);
    cout<<"Selection sort :"<<endl;
    display(a,100);
    InsertionSort(a,100);
    cout<<"Insertion sort :"<<endl;
    display(a,100);

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

    BubbleSort(a,100);
    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-9;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << "sec" << endl;




    return 0;
}
