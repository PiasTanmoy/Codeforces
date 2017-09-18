#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    string a;
    cin>>a;

    int zero=0;
    int one=0;

    for(long long int i=0; i<n; i++){
        if(a[i] == '1')
            one++;
        else
            zero++;
    }
    cout<<abs(one - zero);
    return 0;
}
