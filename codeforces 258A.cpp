#include<bits/stdc++.h>

using namespace std;

int main()
{
    string b;
    cin>>b;
    int flag=1;

    for(int i=0; i<b.length()-1; i++){
        if(b[i] == '0' && flag==1){
            flag=0;
            continue;
        }
        cout<<b[i];
    }
    if(flag==0)
        cout<<b[b.length()-1];

    return 0;
}
