#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string t;
    cin>>t;

    if(n%2 == 1){
        cout<<"NO";
        return 0;
    }

    long long int sum1=0;
    long long int sum2=0;
    int sum=0;

    for(int i=0; i<n/2; i++){
        sum1+=t[i];
        if(t[i] != '4' && t[i] != '7'){
            cout<<"NO";
            return 0;
        }
    }

    for(int i=n/2; i<n; i++){
        sum2+=t[i];
        if(t[i] != '4' && t[i] != '7'){
            cout<<"NO";
            return 0;
        }
    }

    if(sum1 == sum2){
        cout<<"YES";
        return 0;
    }

    cout<<"NO";
    return 0;

}
