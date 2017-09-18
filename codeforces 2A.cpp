#include<bits/stdc++.h>
using namespace std;

string hashName[1005];
int hashScore[1005];
int n;
string name[1005];
int score[1005];
int searchArray(string s, int position, int n);

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>name[i]>>score[i];

    int searchResult;
    int counter=0;

    for(int i=0; i<n; i++){
        searchResult = searchArray(name[i], i, counter);
        if(searchResult != -1){
            hashScore[searchResult] += score[i];
        }
        else{
            hashName[counter] = name[i];
            hashScore[counter] = score[i];
            counter++;
        }

    }

    //for(int i=0; i<counter; i++)
        //cout<<hashName[i]<<" "<<hashScore[i]<<" "<<endl;

    int MAX = -1005;
    string winner;

    for(int i=0; i<counter; i++)
        if(MAX < hashScore[i]){
            MAX = hashScore[i];
            winner = hashName[i];
        }

    int c=0;
    string win[1005];
    for(int i=0; i<counter; i++){
        if(MAX == hashScore[i]){
            win[c] = hashName[i];
            c++;
        }
    }

    //for(int i=0; i<counter; i++)
        //cout<<win[i]<<" "<<endl;

    if(c == 1){
        cout<<winner;
        return 0;
    }

    int decide[1005] = {0};
    int temp;
    //cout<<MAX<<" "<<c<<endl;

    for(int i=0; i<c; i++){
        temp = 0;
        for(int j=0; j<n; j++){
            if(MAX<=temp){
                break;
            }

            if(win[i] == name[j]){
                temp = temp + score[j];
                //cout<<win[i]<<" "<<score[j]<<" "<<temp<<endl;
            }
            //cout<<temp<<endl;
            decide[i]++;
        }
    }


    int finalWinner ;
    int MIN = 1005;
    for(int i=0; i<c; i++){
        //cout<<decide[i]<<" "<<MIN<<" "<<finalWinner<<endl;
        if(MIN > decide[i]){
             MIN = decide[i];
             finalWinner = i;
        }
    }

    cout<<win[finalWinner];
    return 0;

}

int searchArray(string s, int position, int n)
{
    for(int i=0; i<n; i++){
        if(hashName[i] == s && i != position){
            return i;
        }
    }
    return -1;
}
