#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int avg=0;
    int sum=0;

    avg = (a+b+c)/3;
    sum = abs(avg-a) + abs(avg-b) + abs(avg-c);

    //cout<<sum;


    int MIN=100000;
    int x;
    for(int i=1; i<=100; i++){
        x = abs(i-a) + abs(i-b) + abs(i-c);
        if(MIN>x)
            MIN = x;
    }
    cout<<MIN;
    return 0;
}
