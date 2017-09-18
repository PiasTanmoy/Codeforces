#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    cin>>n>>c;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int b[n];
    int max=0;
    int idx=0;

    for(int i=0; i<n; i++){
        b[i] = ceil(a[i]/(c*1.00));
        if(b[i]>=max){
            max = b[i];
            idx = i;
        }
    }

    cout<<idx+1;

    return 0;
}


