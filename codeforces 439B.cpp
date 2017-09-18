#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x;
    cin>>n>>x;

    unsigned long long int sum = 0;

    int c[n];
    for(long long int i=0; i<n; i++)
        cin>>c[i];

    sort(c, c+n);

    for(long long int i=0; i<n; i++){
        sum += c[i]*x;
        if(x>1)
            x--;
    }

    cout<<sum;
    return 0;

}
