#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

void printData(int *p, int n){
for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
}

int linearSearch(int *m, int n, int item){
    for(int i=0;i<n;i++){
        if(m[i]==item){
            return i;
        }
    }
    return -1;
}

int main(){

    int n=10000;

    int *a= new int[n];
    ifstream fin("10000.txt");

    for(int i=0;i<n;i++){
        fin>>a[i];
    }

    //printData(a,n);


    int item = 2500;



    /*///////////////////////////*/

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

    int index = linearSearch(a,n,item);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-6;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << " milisec" << endl;


    if(index==-1){
        cout<<"Not Found"<<endl;
    }else{
        cout<<item<<" Found in index="<<index<<endl;
    }




return 0;
}

