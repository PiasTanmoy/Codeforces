#include<bits/stdc++.h>

using namespace std;
bool valid(long long int n);

int main()
{
    long long int n;
    cin>>n;

    int counter=0;

    while(1){
        n++;
        counter++;

        if(valid(n)){
            cout<<counter;
            return 0;
        }
    }
}

bool valid(long long int n)
{
    if(n<0)
        n=n*(-1);
    while(n!=0){
        if(n%10 == 8)
            return true;
        n/=10;
    }
    return false;
}

