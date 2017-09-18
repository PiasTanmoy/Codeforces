#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int sum = (n*(n+1))/2;
    int x=m;

    while(x>=0){
        x = x - sum;
    }

    x = x + sum;
    int counter=1;
    while(x>=0){
        x -= counter++;
    }
    x += (--counter);
    cout<<x;
    return 0;
}
