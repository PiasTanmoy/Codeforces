#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, cur;
    cin>>n>>cur;

    int c=0;
    int a[n];
    int *p[n];
    int idx[n];
    int x=0;
    int flag=1;

    for(int i=0; i<n; i++){
        cin>>a[i];
        p[i] = (int *)malloc(a[i]*sizeof(int));
        flag=1;
        for(int j=0; j<a[i]; j++){
            cin>>p[i][j];
            if((p[i][j]<cur) && flag){
                c++;
                idx[x++] = i+1;
                flag = 0;
            }
        }
    }

    cout<<c<<endl;

    for(int i=0; i<x; i++){
        cout<<idx[i]<<" ";
    }

    return 0;
}
