#include<bits/stdc++.h>

using namespace std;

int main()
{
    double d, L, v1, v2;
    cin>>d>>L>>v1>>v2;

    double ans = ((L-d)/(v1+v2));
    printf("%.20lf", ans);
    return 0;
}
