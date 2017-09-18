#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x;
    cin>>n>>x;
    long long int counter=0;

    for(long long int i=1; i<=sqrt(x); i++){
        if(x%i == 0){
            if(x/i<=n){
                if(i != x/i)
                    counter+=2;
                else
                    counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}
