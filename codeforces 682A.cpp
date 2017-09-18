#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x, y;
    cin>>x>>y;

    long long int a, b;
    a = min(x, y);
    b = max(x, y);
    int counter=0;

    for(int i=1; i<=a; i++){
        if(i<5){
            counter += int((b+i)/5);
        }
        else if(i>5){
            counter += (b-(i%5))%5;
        }
        else if( i== 5){
            counter += int(b/5);
        }
    }
    cout<<counter;
    return 0;
}
