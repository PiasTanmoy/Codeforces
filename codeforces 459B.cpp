#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int b[n];

    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    int temp;
    int flag =1;
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

    int min=b[0], max=b[n-1];
    int c_min = 0, c_max=0;
    int i=0, j=0;

    while(min == b[i++])
        c_min++;
    while(max == b[(n-1) - j++])
        c_max++;


    cout<<max - min<<" ";
    cout<<(c_min)*(c_max);

    return 0;
}
