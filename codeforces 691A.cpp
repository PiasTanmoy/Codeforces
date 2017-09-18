#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    if(n == 1){
        if(a[0] == 1)
            cout<<"YES";
        else
            cout<<"NO";
        return 0;
    }

    int counter=0;

    for(int i=0; i<n; i++)
        if(a[i] == 1)
            counter++;

    if(counter+1 == n)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
