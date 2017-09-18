#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string a;
    cin>>a;

    int l=1, r=1, u=1, d=1;

    for(int i=0;i<n; i++){
        if(a[i] == '1' || a[i] == '2' || a[i] == '3') u=0;
        if(a[i] == '7' || a[i] == '0' || a[i] == '9') d=0;
        if(a[i] == '1' || a[i] == '4' || a[i] == '7' || a[i] == '0') l=0;
        if(a[i] == '3' || a[i] == '6' || a[i] == '9' || a[i] == '0') r=0;
    }
    if(l || r || u|| d)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;

}
