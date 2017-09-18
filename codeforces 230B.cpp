#include<bits\stdc++.h>
typedef long long int ll;

using namespace std;

ll primecheck(ll n)
{
    if(n == 2)
        return 1;
    else if(n%2 == 0)
        return 0;
    else{
        for(ll i=2; i<= sqrt(n); i++){
            if(n%i == 0)
                return 0;
        }
        return 1;
    }
}


int main()
{
    ll n;
    cin>>n;

    long long int a[n];

    for(long long int i=0; i<n; i++)
        cin>>a[i];


    double d_sqrt;
    long long int i_sqrt;

    for(int i=0; i<n; i++){
        if(a[i] == 4){
            cout<<"YES"<<endl;
        }

        else if(a[i] == 1){
            cout<<"NO"<<endl;
        }

        else{
            d_sqrt = sqrt(a[i]);
            i_sqrt = d_sqrt;
            if ( d_sqrt == i_sqrt ){
                if(primecheck(i_sqrt))
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
