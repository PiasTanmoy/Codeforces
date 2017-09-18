#include<iostream>

using namespace std;

typedef unsigned long long int LL;

LL getGCD(int x, int y)
{
    LL t;
    while(y!=0){
        t = x%y;
        x = y;
        y = t;
    }

    return x;
}

int main()
{
    LL a, b, c;
    LL x, y, z;
    LL l, r;

    cin>>l>>r;

    for(LL i=l; i<=r; i++){
        for(LL j=i; j<=r; j++){
            for(LL k=j; k<=r; k++){
                x = getGCD(i, j);
                y = getGCD(j, k);
                z = getGCD(i, k);

                cout<<x<<" "<<y<<" "<<z<<endl;

                if((x == 1 && y ==1) && z !=1){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<-1<<endl;
    return 0;
}
