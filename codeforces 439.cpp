#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int s, t, a[s];
    cin>>s>>t;
    int jokes=0, sum=0, time;

    for(int i=0; i<s; i++){
        cin>>a[i];
        //sum+=a[i];
    }

     for(int i=0; i<s; i++){
        //cin>>a[i];
        sum+=a[i];
    }

    time = (s - 1)*10 + sum;

    if(time>t){
        cout<<-1;
        return 0;
    }

    int div;

    div = (t-time)/5;
    jokes = (s - 1)*2 + div;

    cout<<jokes;

    return 0;
}
