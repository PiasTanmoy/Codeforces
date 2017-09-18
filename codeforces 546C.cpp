#include<bits/stdc++.h>
using namespace std;

int n;
int n1;
int n2;
int a1[10];
int a2[10];
int x;
queue<int> q1;
queue<int> q2;
int counter=0;


void input()
{
    cin>>n;
    cin>>n1;
    for(int i=0; i<n1; i++){
        cin>>a1[i];
        q1.push(a1[i]);
    }

    cin>>n2;
    for(int i=0; i<n2; i++){
        cin>>a2[i];
        q2.push(a2[i]);
    }

}


bool startGame()
{
    int x1,x2;

    while(counter++<=1000){
        x1 = q1.front();
        q1.pop();

        x2 = q2.front();
        q2.pop();

        if(x1>x2){
            q1.push(x2);
            q1.push(x1);
        }
        else{
            q2.push(x1);
            q2.push(x2);
        }

        if(q1.empty()){
            x=2;
            break;
        }
        if(q2.empty()){
            x=1;
            break;
        }
    }
    if(counter>=1000)
        return false;
    else
        return true;
}


int main()
{
    input();
    if(startGame())
        cout<<counter<<" "<<x;
    else
        cout<<-1;

    return 0;
}
