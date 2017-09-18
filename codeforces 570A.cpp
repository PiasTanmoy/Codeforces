#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    long long int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    int win[n];
    for(int i=0; i<n; i++)
        win[i]=0;

    int idx=-1;
    long long int ma=-1;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(ma<a[i][j]){
                ma=a[i][j];
                idx=j;
            }
        }
        win[idx]++;
        ma=-1;
        idx=-1;
    }

    ma=-1;
    idx=-1;
    for(int i=0; i<n;i++){
        //cout<<win[i]<<" ";
        if(ma<win[i]){
            ma=win[i];
            idx=i;
        }
    }

    cout<<idx+1;
    return 0;
}
