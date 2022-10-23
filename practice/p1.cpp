#include<bits/stdc++.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <chrono>
using namespace std::chrono;
using namespace std;


void BubbleSort(int *array,int size)
{
    for(int i=0;i<size;i++){
        int swapflag=0;
        for(int j=0; j<size-i-1; j++)
        {
            if(array[j]>array[j+1]){
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
    for(int i=0;i<size;i++){
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

void display(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int BinerySearch(int *array,int low,int high,int x)
{
    while(low<=high)
    {
        int  mid=low+(high-low)/2;
        if(array[mid]==x)
        {
           return mid;
        }else if(array[mid]<x)
        {
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int LinearSearch(int *array,int n,int x)
{
    for(int i=0;i<n;i++)
        if(array[i]==x)
    {
        return i;
    }
    return -1;
}

int main()
{

    int *A=new int[100];
    srand(time(0));

    //freopen("100-int.txt","w",stdout);
    freopen("100-int.txt","r",stdin);
    cout<<"random number before sorting:"<<endl;

    for(int i=0;i<100;i++)
    {
        //int a=rand();
        A[i]=rand()%50;
        //cout<<a<< " "<<a%100<<endl;
        //cout<<a%100+1<<" ";
    }
    display(A,100);
    BubbleSort(A,100);
    cout<<"random number after bubble sort:"<<endl;
    display(A,100);
    SelectionSort(A,100);
    cout<<"random number after selection sort:"<<endl;
    display(A,100);
    InsertionSort(A,100);
    cout<<"random number after inssertion sort:"<<endl;
    display(A,100);

    int result1=BinerySearch(A,0,100-1,30);
    cout<<"Number at position:"<<result1<<endl;

    int result2=LinearSearch(A,100-1,48);
    cout<<"Number at position:"<<result2<<endl;

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    //int *m = bubbleSort(A,n);
    /* .......................................  */
   BubbleSort(A,100);

    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;


    return 0;
}
