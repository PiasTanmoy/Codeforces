#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int a;
    cin>>a;
    if(a<=2){
        cout<<-1;
        return 0;
    }



    if(a%2 == 0)
    {
        cout<<( a*a/4 + 1) <<" "<< ( a*a/4 - 1);
    }
    else
    {
        cout<<(a*a+1)/2<< " "<<(a*a-1)/2;
    }

    return 0;
}
