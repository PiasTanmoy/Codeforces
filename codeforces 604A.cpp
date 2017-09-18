#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m[5];
    for(int i=0; i<5; i++)
        cin>>m[i];

    int w[5];
    for(int i=0; i<5; i++)
        cin>>w[i];

    int sh, uh;
    cin>>sh>> uh;

    int x[5] = {500, 1000, 1500, 2000, 2500};

    double sum=0;

    for(int i=0;i <5; i++){
        sum += max ( 0.3*x[i], ( (( 1- (m[i]/250.0))*x[i]) - (50.0*w[i])) );
    }

    sum += ( (sh*100) - (uh*50) );

    cout<<ceil(sum);

    return 0;

}
