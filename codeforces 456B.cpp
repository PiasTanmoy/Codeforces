#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter=0;
    int x;
    string power;

    cin>>power;
    int len = power.length();

    x = power[len-1] - '0';

    if(x == 0 && len == 1){
        cout<<4;
        return 0;
    }


    int mod = (x-1)%4;
    int a3[4] = {3, 4, 2, 1};
    int a2[4] = {2, 4, 3, 1};
    int a4 ;
    if(x%2 == 0)
        a4=1;
    else
        a4=4;

    int sum = 1 + a2[mod] + a3[mod] + a4;

    cout<<sum%5;

    return 0;

}
