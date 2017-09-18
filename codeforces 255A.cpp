#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int x=0;
    int y=0;
    int z=0;
    int i=0;
    while(i<(n-2)){
        x += a[i++];
        y += a[i++];
        z += a[i++];
    }

    if(n-i == 1){
        x += a[i];
    }
    else if(n-i == 2){
        x += a[i++];
        y += a[i];
    }

    if(x>y && x>z)
        cout<<"chest";
    else if(y>x && y>z)
        cout<<"biceps";
    else
        cout<<"back";
    return 0;
}
