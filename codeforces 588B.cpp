#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int temp1, temp2;
    int flag=0;
    long long int MAX=-1;



    for(long long int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            temp1 = i;
            temp2 = (n/i);

            for(long long int j=2; j<=sqrt(temp1); j++){
                if(temp1%(j*j) == 0)
                    flag = 1;
            }
            if(flag==0){
                if(MAX<temp1)
                    MAX = temp1;
                flag=0;
            }
            flag=0;

            for(long long int j=2; j<=sqrt(temp2); j++){
                if(temp2%(j*j) == 0)
                    flag = 1;
            }
            if(flag==0){
                if(MAX<temp2)
                    MAX = temp2;
                flag=0;
            }
            flag=0;
        }

    }

    for(long long int i=2; i<=sqrt(n); i++){
        if(n%(i*i) == 0)
            flag=1;
    }
    if(flag==0){
        if(MAX<n)
            MAX = n;
        flag=0;
        cout<<MAX;
        return 0;
    }
    flag=0;

    cout<<MAX;
    return 0;
}
