#include<bits/stdc++.h>

using namespace std;
int perseInt(char c);

int main()
{
    string s;
    cin>>s;

    int power=0;
    int temp;
    int idxe=-1;
    int c=0;
    int a;
    int b;
    int d;

    a = perseInt(s[0]);
    //cout<<a<<endl;
    long long int length = s.size();
    //cout<<length<<endl;
    for(int i=length-1; i>=0; i--){
        if(s[i] == 'e'){
            idxe = i;
            break;
        }
    }
    //cout<<idxe<<endl;
    int temp2=0;

    for(int i=length-1; i>idxe; i--){
        temp = perseInt(s[i]);
        //cout<<"1 "<<temp<< " "<<c<<endl;
        if(c == 2)
            temp2=100;
        else
            temp2 = pow(10, c++);
        //cout<<"2 "<<temp2<<endl;
        power += temp*temp2;
       //cout<<"3 "<<power<<endl;
    }
    //cout<<power<<endl;
    //if(power>=99 && temp)
    d = idxe - 1;
    //cout<<d<<endl;
    int counter=0;
    if(power<(d-1)){
        cout<<s[0];
        if(d-1 == 1 && power==0 && s[d]=='0')
            return 0;
        for(int i=2; i<power+2; i++)
            cout<<s[i];
        cout<<".";
        for(int i=power+2; i<idxe; i++)
            cout<<s[i];
    }
    else{
        cout<<s[0];
        for(int i=2; i<idxe; i++)
            cout<<s[i];
        for(int i=0; i<power-d+1; i++){
            cout<<0;
            counter++;
        }

    }
    //if(power==100 && counter == 98)
        //cout<<0;
    //cout<<counter<<endl;
    return 0;

}

int perseInt(char c)
{
    return c-'0';
}
