#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int bx, by;
    int b1[100], b2[100];

    cin>>n>>bx;
    for(int i=0; i<n; i++)
        cin>>b1[i];

    cin>>m>>by;
    for(int j=0; j<m; j++)
        cin>>b2[j];

    unsigned long long int num1=0, num2=0;
    int counter=0;

    for(int i=0; i<n; i++){
        num1 += b1[i]*pow(bx, n-1-i);
    }
    cout<<num1<<endl;

    for(int i=0; i<m; i++){
        num2 += b2[i]*pow(by, m-1-i);
    }
    cout<<num2<<endl;
    if(num1 == num2)
        cout<<"=";
    else if(num1>num2)
        cout<<">";
    else
        cout<<"<";

    return 0;
}
