#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n, m, c=0;
    cin>>n>>m;
    for(int i=0; i<100+1; i++)
        for(int j=0; j<100+1; j++)
            if((i*i + j == n) && (i + j*j == m))
                c++;

    cout<<c;

    return 0;
}
