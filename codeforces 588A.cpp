#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int a[n];
    long long int b[n];

    for(long long int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    long long int curMin=b[0];
    long long int sum=0;

    for(long long int i=0; i<n; i++){
        if(curMin>b[i]){
            curMin = b[i];
        }

        sum+= curMin*a[i];
    }

    cout<<sum;
    return 0;

}
