#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int d1, d2, d3;
    cin>>d1>>d2>>d3;

    long long int x1, x2, x3, x4;

    x1 = (d1+d2+d3);
    x2 = (2*d1+2*d2);
    x3 = (2*d1+2*d3);
    x4 = (2*d2+2*d3);

    cout<<min(x4, min(x3, min(x1, x2)));
    return 0;
}
