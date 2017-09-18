#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n5=0, n0=0, x, n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;

        if(x == 5)
            n5++;
        else if(x == 0)
            n0++;
    }

    int c5=0;
    for(int i=0; i<=n5; i++){
        if(((n5-i)*5)%9 == 0){
            c5 = n5-i;
            break;
        }
    }

    if(c5 == 0){
        if(n0 == 0){
            cout<<-1;
            return 0;
        }
        else if(n0 != 0){
            cout<<0;
            return 0;
        }
    }
    else{
        if(n0>0){
            for(int i=0; i<c5; i++)
                cout<<5;
            for(int i=0; i<n0; i++)
                cout<<0;
        }
        else
            cout<<-1;
    }

    return 0;
}


