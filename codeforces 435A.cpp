#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m ;
    cin>>n>>m;

    int a[105];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int counter=0;
    int temp;
    int i=0;

    while(i<n){

        counter++;
        temp = m;

        while(temp>=a[i]){
            temp -= a[i++];
        }
    }
    cout<<counter;
    return 0;
}
