#include<bits/stdc++.h>
using namespace std;

double a, b;

double dist(double x, double y)
{
    return sqrt( (pow((a-x), 2) + pow((b-y), 2) ) );
}

int main()
{

    cin>>a>>b;

    int n;
    cin>>n;

    double x[n], y[n], v[n];

    double rate, MIN = 10000;

    for(int i=0; i<n; i++)
        cin>>x[i]>>y[i]>>v[i];

    for(int i=0; i<n; i++){
        rate = dist(x[i], y[i])/v[i];
        if(rate < MIN)
            MIN = rate;
    }

    printf("%.20lf", MIN);
    return 0;
}
