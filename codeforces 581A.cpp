#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int n, m;
    n = min(a,b);
    m = abs(a-b);
    m/=2;
    cout<<n<<" "<<m;
    return 0;
}
