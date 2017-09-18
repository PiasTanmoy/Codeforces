#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int a[n];

    for(long long int i=0; i<n; i++)
        cin>>a[i];

    long long int x1=0, x2=0;
    int flag=1;

    for(long long int i=0; i<n-1; i++){
        if((a[i] > a[i+1]) && flag==1){
            x1 = i;
            flag=0;
        }
        if(flag==0 && (a[i]>a[i+1]))
            x2 = i+1;
    }

    sort(a+x1, a+x2+1);

    for(long long int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            cout<<"no";
            return 0;
        }
    }

    cout<<"yes"<<endl;
    cout<<x1+1<<" "<<x2+1;

    return 0;
}

