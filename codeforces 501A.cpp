#include<bits/stdc++.h>

using namespace std;

int maximum(int x, int y)
{
    if(x>=y)
        return x;
    return y;
}


int main()
{
    int p1, p2, t1, t2;
    cin>>p1>>p2>>t1>>t2;

    int x = maximum(((3*p1)/10) , (p1 - ((p1*t1)/250)));
    int y = maximum(((3*p2)/10) , (p2 - ((p2*t2)/250)));

    if(x>y)
        cout<<"Misha";
    else if(x<y)
        cout<<"Vasya";
    else
        cout<<"Tie";

    return 0;
}


