#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int rem=0;

    while(n!=1){
        rem += (n%2);
        n/=2;
    }
    cout<<rem+1;
    return 0;
}
