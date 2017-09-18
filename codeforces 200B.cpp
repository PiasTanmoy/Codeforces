#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int o[n];

    for(int i=0; i<n; i++)
        cin>>o[i];

    double sum=0;
    for(int i=0; i<n; i++){
        sum = sum + (o[i]/100.00);
    }

    double ans;
    ans = (sum/n)*100;

    printf("%.12lf", ans);

    return 0;
}
