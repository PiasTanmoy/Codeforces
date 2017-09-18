#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int length = s.size();

    int ida=-1;///1st position of a
    for(int i=0; i<length; i++){
        if(s[i] == 'a'){
            ida = i;
            break;
        }
    }

    int ido=-1;///1st position of other than a
    for(int i=0; i<length; i++){
        if(s[i] != 'a'){
            ido = i;
            break;
        }
    }

    if(ida == -1 && ido == 0){  /// no a in s
        for(int i=0; i<length; i++)
            cout<<char(s[i]-1);
        return 0;
    }

    if(ido == 0){   /// if a in s but not starting a
        for(int i=0; i<ida; i++){
            cout<<char(s[i]-1);
        }
        for(int i=ida; i<length; i++){
            cout<<s[i];
        }
        return 0;
    }

    if(ido == -1){/// if no other than a
        for(int i=0; i<length-1; i++)
            cout<<s[i];
        cout<<'z';
        return 0;
    }

    if(ida == 0){   ///staring with a

        for(int i=0; i<ido; i++){
            cout<<s[i]; ///print all a's front of s
        }

        for(int i=ido; i<length; i++){
            if(s[i] == 'a'){
                for(int j=i; j<length; j++)
                    cout<<s[j];
                return 0;

            }
            else
                cout<<char(s[i]-1);
        }
        return 0;

    }


}
