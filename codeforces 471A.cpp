#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[7];
    int same1=0;
    int same2=0;
    int same3=0;

    for(int i=1; i<=6; i++)
        cin>>a[i];

    int countSort[10];
    for(int i=0; i<=10; i++)
        countSort[i] = 0;

    for(int i=1; i<=6; i++){
        countSort[a[i]]++;
    }

    int c=0;
    for(int i=1; i<=9; i++){
        if(countSort[i] != 0)
            c++;
        if(countSort[i] == 4)
            same1=1;
        if(countSort[i] == 5)
            same2=1;
        if(countSort[i] == 6)
            same3=1;
    }

    if( (c==2 && same1==1) || same3==1)
        cout<<"Elephant";
    else if(same1 || same2)
        cout<<"Bear";
    else
        cout<<"Alien";

    return 0;
}
