#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int sum=0;
    int c=1;
    long long int i;

    if(n<10){
        cout<<n;
        return 0;
    }

    for(i=10; i<=10000000000; i*=10){
        if(n>=i){
            sum+= (i-(i/10))*c;
        }
        else{
            sum+= (n - (i/10) + 1)*c;
            cout<<sum;
            return 0;
        }
        c++;
    }

}


