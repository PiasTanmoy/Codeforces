#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, s, x;
    cin>>t>>s>>x;

    if(t>x){
        cout<<"NO"<<endl;
        return 0;
    }
    if( (x-t) == 0){
        cout<<"YES"<<endl;
        return 0;
    }
    else if( (x-t) == 1){
        cout<<"NO"<<endl;
        return 0;
    }

    if((x-t)%s == 0 ||(x-t)%s == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
