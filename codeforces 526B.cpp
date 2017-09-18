#include<bits/stdc++.h>
using namespace std;

int n, depth;
const int SIZE = (1<<11)+5;
int lights[SIZE];
int sum=0;
int node;

void input()
{
    cin>>n;
    depth = n+1;
    node = (1<<depth)-1;

    for(int i=2; i<=node; i++)
        cin>>lights[i];
}

int cal_light()
{
    for(int i=node/2; i>=1; i--){
        sum += abs(lights[2*i] - lights[2*i+1]);
        lights[i] += max(lights[2*i],lights[2*i+1]);
    }
    cout<<sum;
}


int main()
{
    input();
    cal_light();
    return 0;

}
