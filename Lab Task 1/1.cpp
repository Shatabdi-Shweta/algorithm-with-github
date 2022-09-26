#include<bits/stdc++.h>
using namespace std;

int **Matrix(int r,int c)
{
    int **m=new int *[r];
    for(int i=0;i<c;i++)
    {
        m[i]=new int[c];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            m[i][j]=rand()%10;
        }
    }
    return m;
}

void printMatrix(int **m,int rows,int colums)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<colums;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    srand(time(0));
    int **A=Matrix(4,5);
    int **B=Matrix(4,5);
   // addValue(A,4,5);
    printMatrix(A,4,5);
    cout<<endl;
    printMatrix(B,4,5);
    cout<<endl;

    return 0;


}

