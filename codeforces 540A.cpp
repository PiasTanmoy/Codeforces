#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string number1;
    string number2;
    cin>>number1;
    cin>>number2;

    int n1[n];
    int n2[n];
    int i=0;

    while(i<n){
        n1[i] = (number1[i]-'0') % 10;
        n2[i] = (number2[i]-'0') % 10;
        i++;
    }

    int m1;
    int m2;
    int m;
    int sum = 0;

    for(int i=0; i<n; i++){
        m1 = abs(n1[i] - n2[i]);
        m2 = abs( ( 10 - max(n1[i],n2[i] ) ) + min(n1[i],n2[i]) );
        m = min(m1,m2);
        sum+=m;
    }

    cout<<sum;
    return 0;
}


