#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    char num[n];

    for(int i=0; i<n; i++){
        cin>>num[i];
    }

    int t=n;
    int a[100];
    int j=0;

    for(int i=0; i<n; i++){
        switch(num[i])
        {
        case '2':
            a[j++] = 2;
            break;
        case '3':
            a[j++] = 3;
            break;
        case '4':
            a[j++] = 3;
            a[j++] = 2;
            a[j++] = 2;
            break;
        case '5':
            a[j++] = 5;
            break;
        case '6':
            a[j++] = 5;
            a[j++] = 3;
            break;
        case '7':
            a[j++] = 7;
            break;
        case '8':
            a[j++] = 7;
            a[j++] = 2;
            a[j++] = 2;
            a[j++] = 2;
            break;
        case '9':
            a[j++] = 7;
            a[j++] = 3;
            a[j++] = 3;
            a[j++] = 2;
            break;
        }
    }

    int max=j;

    int flag = 1;
    int temp;
    for(int i=0; i<max && flag; i++){
        flag=0;
        for(int j=0; j<max-1-i ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
    }

    for(int i=max-1; i>=0; i--)
        cout<<a[i];

    return 0;
}


