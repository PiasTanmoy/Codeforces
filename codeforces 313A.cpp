#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int rem1=0;
    int rem2=0;

    if(0<=n){
        cout<<n;
        return 0;
    }

    n=n*(-1);
    rem1 = n%10;
    n/=10;
    rem2 = n%10;
    n/=10;
    n=n*(-1);
    if(rem1<rem2){
        n = n*10+rem1*(-1);
        cout<<n;
    }
    else{
        n = n*10+rem2*(-1);
        cout<<n;
    }

    return 0;
}

