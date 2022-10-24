#include<bits/stdc++.h>
using namespace std;

int *generate_data(int n){
    int *m = new int[n];
    for(int i=0;i<n;i++){
        m[i]=rand();
    }
    return m;
}

int printData(int *p, int n){
    ofstream fout("1000.txt");
for(int i=0;i<n;i++){
        fout<<p[i]<<endl;
    }
}


int main(){

    int n=1000;
    srand(time(0));
    int *a= generate_data(n);
    printData(a,n);




return 0;
}                                                                                                                              

