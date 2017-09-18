#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n];
    int  b[n];

    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++)
            cin>>a[i][j];
        b[i]=0;
    }



    int i=0, j=0, c=0, ok=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] == 1 || a[i][j] == 3)
                ok = 0;
            if(j==n-1 && ok == 1){
                c++;
                b[i] = 1;
            }
        }
        ok = 1;
    }

    cout<<c<<endl;

    for(int i=0; i<n; i++){
        if(b[i] == 1)
            cout<<i+1<<" ";
    }
    /*
    while(1){
        if(a[i][j] == 1 || a[i][j] == 3){
            i++;
            j=-1;
        }
        if(i == n)
            break;
        if(j+1 == n){
            flag=1;
            cout<<i+1<<endl;
            if((i+1 == n) && (j+1 == n))
                break;
            j=-1;
            i++;
        }
        j++;
    }
    */

    return 0;
}


