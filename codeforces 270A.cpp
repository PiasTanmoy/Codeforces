#include<bits/stdc++.h>

using namespace std;

int main()
{
    int angle;
    int t;

    cin>>t;

    for(int i=0; i<t; i++){
        cin>>angle;

        if(360%(180-angle) == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
