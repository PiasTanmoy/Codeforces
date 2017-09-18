#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin>>n>>b>>d;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int counter=0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(sum>d){
            sum=0;
            counter++;
        }
        if(a[i]<=b)
            sum+=a[i];
        if(sum>d){
            sum=0;
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
