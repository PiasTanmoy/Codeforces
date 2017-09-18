#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int x, y;

    int MAX = max(a, b);
    int ans = (6-MAX+1);

    if(ans == 6){
        cout<<1<<"/"<<1;
        return 0;
    }

    x = __gcd(ans, 6);

    cout<<(ans/x);
    cout<<"/";
    cout<<(6/x);

    return 0;
}

