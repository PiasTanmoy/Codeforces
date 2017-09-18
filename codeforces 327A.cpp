#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int MAX=-1;
    int m=0;
    int nZero=0;
    int nOne=0;
    int idx1=0;
    int idx2=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[j] == 0)
                nZero++;
            if(a[j] == 1)
                nZero--;
            if(MAX<nZero){
                MAX = nZero;
                idx1=i;
                idx2=j;
            }
        }
        nZero=0;
    }

    for(int i=0; i<idx1; i++){
        if(a[i] == 1 )
            m++;
    }

     for(int i=idx2+1; i<n; i++){
        if(a[i] == 1 )
            m++;
    }

    for(int i=idx1; i<=idx2; i++){
        if(a[i] == 0)
            m++;
    }

    cout<<m;

    return 0;
}
