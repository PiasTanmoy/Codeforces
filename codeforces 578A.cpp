#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;

    if(a<b){
        cout<<-1;
        return 0;
    }

    int flag1=1, flag2=1;
    double x1, x2, x;

    for(int i=1; i<=(a+b) &&(flag1 || flag2); i++){

        if(flag1)
            x1 = (a+b)/(2.0*i);
        if(flag2)
            x2 = (a-b)/(2.0*i);

        if(x1<b){
            flag1=0;
            x1 = (a+b)/(2.0*(i-1));
        }
        if(x2<b){
            flag2=0;
            x2 = (a-b)/(2.0*(i-1));
        }
    }

    x = (x1<x2)?x1:x2;

    printf("%.12lf", x);

    return 0;
}

