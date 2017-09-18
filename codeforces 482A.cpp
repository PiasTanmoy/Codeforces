#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int x, y;
    x = 1;
    y = k+1;

    while(x<y)
        cout<<x++<<" "<<y--<<" ";

    if(x == y)
        cout<<x<<" ";

    x = k+2;
    while(x<=n)
        cout<<x++<<" ";

    return 0;
}
