#include<bits/stdc++.h>

using namespace std;

int mod(int x)
{
    if(x>=0)
        return x;
    return x*-1;
}


int main()
{
    int a, b;
    cin>>a>>b;

    int c1=0, c2=0, c3=0;

    for(int i=1; i<=6; i++){
        if(mod(a-i) < mod(b-i))
            c1++;
        else if(mod(a-i) > mod(b-i))
            c2++;
        else if(mod(a-i) == mod(b-i))
            c3++;
    }

    cout<<c1<<" "<<c3<<" "<<c2;

    return 0;
}

