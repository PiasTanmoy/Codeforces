#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int b[n];

    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    int flag = 1;
    int temp;

    for(int i=0; i<n && flag; i++){
        flag=0;
        for(int j=0; j<n-1-i ; j++){
            if(b[j]>b[j+1]){
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
                flag = 1;
            }
        }
    }

    int sum=0;

    for(int i=0; i<n-1; i++){
        if(b[i]>=b[i+1]){
            sum+= (b[i] - b[i+1] + 1);
            b[i+1] += (b[i] - b[i+1] + 1);
        }
    }

    cout<<sum;

    return 0;
}


