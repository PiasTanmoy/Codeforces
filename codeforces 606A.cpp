#include<bits/stdc++.h>
using namespace std;
int trans(int n2, int n1);

int main()
{
    int a1, b1, c1;
    cin>>a1>>b1>>c1;

    int a2, b2, c2;
    cin>>a2>>b2>>c2;

    int a3, b3, c3;
    a3 = trans(a1,a2);
    b3 = trans(b1,b2);
    c3 = trans(c1,c2);

    if(a3+ b3+c3 >= 0)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;

}

int trans(int n1, int n2)
{
    if(n1>=n2)
        return (n1-n2)/2;
    else
        return (n1-n2);
}
