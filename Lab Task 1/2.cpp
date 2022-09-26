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

void matrixSummation(int **m,int **n,int **sum,int rows,int colums)
{
    for(int  i=0;i<rows;i++)
    {
        for(int j=0;j<colums;j++)
        {
            sum[i][j]=m[i][j]+n[i][j];
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }

}

void matrixSubtraction(int **m,int **n,int **sub,int rows,int colums)
{
    for(int  i=0;i<rows;i++)
    {
        for(int j=0;j<colums;j++)
        {
            sub[i][j]=m[i][j]-n[i][j];
            cout<<sub[i][j]<<"\t";
        }
        cout<<endl;
    }

}

void matrixMultiplication(int **m,int **n,int **mult,int rows,int colums)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<colums;j++)
        {
            mult[i][j]=0;
            for(int k=0;k<colums;k++)
            {
                mult[i][j] += m[i][k]*n[k][j];

            }
            cout<<mult[i][j]<<"\t";

        }
        cout<<endl;

    }

}

int main()
{
    srand(time(0));
    int **A=Matrix(5,5);
    int **B=Matrix(5,5);
    int **s=Matrix(5,5);

    cout<<"print matrix:"<<endl;
    printMatrix(A,5,5);
    cout<<endl;
    cout<<"print matrix:"<<endl;
    printMatrix(B,5,5);
    cout<<endl;
    cout<<"Summation of the matrix:"<<endl;
    matrixSummation(A,B,s,5,5);
    cout<<endl;
    cout<<"Subtraction of the mtrix:"<<endl;
    matrixSubtraction(A,B,s,5,5);
    cout<<endl;
    cout<<"Multiplication of matrix:"<<endl;
    matrixMultiplication(A,B,s,5,5);

    return 0;


}

