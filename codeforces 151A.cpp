#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int minimum(int a, int b, int c)
{
    return (a<b)?((a<c)?a:c):((b<c)?b:c);
}

int main()
{
    int n,k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int x;

    x = minimum((k*l)/nl, c*d, p/np);

    cout<<x/n;
    return 0;
}


