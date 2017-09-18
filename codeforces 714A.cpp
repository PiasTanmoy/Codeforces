#include<bits/stdc++.h>
using namespace std;

long long int l1, r1, l2, r2, k, d;

void input()
{
    cin>>l1>>r1>>l2>>r2>>k;
}



int main()
{
    input();
    if(l1<l2){
        if(r1>r2){
            d = r2 - l2;
            if(l2<=k && k<=r2)
                d--;
        }
        else if(r1<r2){
            d = r1-l2;
            if(l2<=k && k<=r1)
                d--;
        }
        else{
            d = r2-l2;
            if(l2<=k && k<=r2)
                d--;
        }
        d++;

    }

    if(l1>=l2){
        if(r1>r2){
            d = r2-l1;
            if(l1<=k && k<=r2)
                d--;
        }

        else if(r1==r2){
            d = r2-l1;
            if(l1<=k && k<=r2)
                d--;
        }

        else{
            d = r1-l1;
            if(l1<=k && k<=r1)
                d--;
        }
        d++;
    }

    if(r1<l2)
        d=0;
    else if(r1==l2){
        if(k!=r1) d=1;
        else d=0;
    }

    else if(l1>r2)
        d=0;
    else if(l1==r2){
        if(k!=r1) d=1;
        else d=0;
    }

    cout<<d;
    return 0;
}
