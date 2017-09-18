#include<bits/stdc++.h>

using namespace std;

int n;
int a[200];

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];


    if(n<2){
        if(n==1 && a[n]==0){
            cout<<"UP";
            return 0;
        }
        cout<<-1;
        return 0;
    }

    if(a[n]==0){
        cout<<"UP";
        return 0;
    }

    if(a[n-1]<a[n]){
        cout<<"UP";
    }
    else{
        cout<<"DOWN";
    }

    return 0;
}
