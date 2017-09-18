#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a, b, sum=0;
    cin>>a>>b;

    int x, y;
    x = (a<b)?a:b;
    y = (a>b)?a:b;
    int temp;

    while(1){

        if(x>y){
            temp = x;
            x = y;
            y = temp;
        }

        if(y>=2 && x>=1){
            y--;
            y--;
            x--;
            sum++;
        }

        if((x<=1 && y<=1) || x==0 || y==0){
            cout<<sum;

            return 0;
        }

    }
}


