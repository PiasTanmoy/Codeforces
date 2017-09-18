#include<iostream>
#include<stdio.h>

using namespace std;

void print_num(int n)
{
    switch(n)
    {
    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"two";
        break;
    case 3:
        cout<<"three";
        break;
    case 4:
        cout<<"four";
        break;
    case 5:
        cout<<"five";
        break;
    case 6:
        cout<<"six";
        break;
    case 7:
        cout<<"seven";
        break;
    case 8:
        cout<<"eight";
        break;
    case 9:
        cout<<"nine";
        break;
    }
}


int main()
{
    int n;
    cin>>n;

    if(n==0)
        cout<<"zero";

    else if(n<10){
        print_num(n);
        return 0;
    }

    else if(n<20){
        switch(n%10)
        {
        case 0:
            cout<<"ten";
            break;
        case 1:
            cout<<"eleven";
            break;
        case 2:
            cout<<"twelve";
            break;
        case 3:
            cout<<"thirteen";
            break;
        case 4:
            cout<<"fourteen";
            break;
        case 5:
            cout<<"fifteen";
            break;
        case 6:
            cout<<"sixteen";
            break;
        case 7:
            cout<<"seventeen";
            break;
        case 8:
            cout<<"eighteen";
            break;
        case 9:
            cout<<"nineteen";
            break;
        }
    }

    else if(n<100){
        switch((n - (n%10))/10)
        {
        case 2:
            cout<<"twenty";
            break;
        case 3:
            cout<<"thirty";
            break;
        case 4:
            cout<<"forty";
            break;
        case 5:
            cout<<"fifty";
            break;
        case 6:
            cout<<"sixty";
            break;
        case 7:
            cout<<"seventy";
            break;
        case 8:
            cout<<"eighty";
            break;
        case 9:
            cout<<"ninety";
            break;
        }
        if(n%10){
            cout<<"-";
            print_num(n%10);
        }
    }

    return 0;

}


