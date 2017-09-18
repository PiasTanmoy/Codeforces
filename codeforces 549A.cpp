#include<bits/stdc++.h>

using namespace std;

int cnt=0;

void comp(char a[])
{
    int flag = 1;
    int temp;
    char face[] = "acef";

    for(int i=0; i<4 && flag; i++){
        flag=0;
        for(int j=0; j<4-1-i ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
    }
    if(!strcmp(a , face))
        cnt++;

}
int main()
{
    int a, b;
    cin>>a>>b;

    char s[a][b];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>s[i][j];
        }
    }

    char temp[5];
    int c=0;

    char face[] = "acef";

    for(int i=0; i<a-1; i++){
        for(int j=0; j<b-1; j++){
            if(s[i][j] == 'f' ||s[i][j] == 'a' ||s[i][j] == 'c' ||s[i][j] == 'e' ){
                if(s[i][j+1] == 'f' ||s[i][j+1] == 'a' ||s[i][j+1] == 'c' ||s[i][j+1] == 'e' ){
                    if(s[i+1][j] == 'f' ||s[i+1][j] == 'a' ||s[i+1][j] == 'c' ||s[i+1][j] == 'e'){
                        if(s[i+1][j+1]  == 'f' ||s[i+1][j+1]  == 'a' ||s[i+1][j+1]  == 'c' ||s[i+1][j+1] == 'e' ){
                            temp[c++] = s[i][j];
                            temp[c++] = s[i][j+1];
                            temp[c++] = s[i+1][j];
                            temp[c++] = s[i+1][j+1];
                            temp[c] = '\0';

                            comp(temp);
                            c=0;

                        }
                    }
                }
            }
        }
    }

    cout<<cnt;

    return 0;
}

