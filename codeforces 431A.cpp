#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5], c[5]={0};
    char s[100005];

    for(int i=1; i<5; i++)
        cin>>a[i];
    cin>>s;

    for(int i=0; i<strlen(s); i++){
        if(s[i] == '1')
            c[1]++;
        if(s[i] == '2')
            c[2]++;
        if(s[i] == '3')
            c[3]++;
        if(s[i] == '4')
            c[4]++;
    }

    int sum = 0;

    for(int i=1 ;i<5; i++)
        sum+=(a[i]*c[i]);

    cout<<sum;

    return 0;

}
