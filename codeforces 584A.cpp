#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int t;

    cin>>n>>t;

    if(n==1){
        int c1=0;
        int c2=10;

        for(int i=c1+1; i<c2; i++){
            if(i%t == 0){
                cout<<i;
                return 0;
            }
        }
        cout<<-1;
        return 0;
    }

    if(t<10){
        for(int i=0; i<n; i++)
            cout<<t;
    }
    else{
        cout<<1;
        for(int i=0; i<n-1; i++)
            cout<<0;
    }
    return 0;
}

