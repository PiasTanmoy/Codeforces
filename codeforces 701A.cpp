#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    if(n == 2){
        cout<<1<<" "<<2;
        return 0;
    }

    int sum = 0;
    for(int i=0; i<n; i++)
        sum+=a[i];

    sum = (2*sum)/n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( ((a[i]+a[j] == sum)) && (i != j) && (a[i] != -1) && (a[j] != -1)){
                cout<<i+1<<" "<<j+1<<endl;
                a[i] = -1;
                a[j] = -1;
                break;
            }
        }
    }

    return 0;
}
