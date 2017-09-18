#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a, f, r;
    cin>>a>>f>>r;

    cout<<min(a - f, r + 1);

    return 0;
}
