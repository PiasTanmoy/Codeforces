#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int a, b, sum=0, c, temp, max, min, rem=1, div;
    cin>>a>>b;

    max = (a>b)?a:b;
    min = (a<b)?a:b;
    a = max;
    b = min;

    while(rem !=0){
        div=(a/b);
        //cout<<div<<endl;
        rem = a%b;
        a = b;
        b = rem;
        sum+=div;
    }

    cout<<sum;

    return 0;
}
