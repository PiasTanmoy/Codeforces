#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x1,x2, y1,y2, sum=0, x, y;
    cin>>x1>>y1>>x2>>y2;

    x = abs(x1-x2);
    y = abs(y1-y2);


    if(x>y)
        cout<<x;
    else
        cout<<y;

    return 0;
}

