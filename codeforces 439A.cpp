#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int d;
    cin>>n>>d;

    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    if(sum>d){
        cout<<-1;
        return 0;
    }

    int remain = d - sum;
    int t = remain/5;
    if(t>=(n-1)*2)
        cout<<t;
    else
        cout<<-1;

    return 0;
}


