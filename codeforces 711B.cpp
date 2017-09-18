#include<bits/stdc++.h>
using namespace std;

int n;
long long int mat[505][505];
int r, c;
unsigned long long int sumR[505];
unsigned long long int sumC[505];
unsigned long long int sum=0;
unsigned long long int sumD1=0;
unsigned long long int sumD2=0;
long long int ans=0;
int counter=1;
unsigned long long int sumR2[505];
unsigned long long int sumC2[505];
unsigned long long int sumD12=0;
unsigned long long int sumD22=0;

void input()
{
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>mat[i][j];
            if(mat[i][j]==0){
                r=i;
                c=j;
            }
        }
    }
}


void getSum()
{
    counter=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            sumR[counter] += mat[i][j];
        }
        counter++;
    }

    counter=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            sumC[counter] += mat[j][i];
        }
        counter++;
    }

    for(int i=1, j=1; i<=n, j<=n; i++, j++)
        sumD1 += mat[i][j];
    int i,j;
    for(i=1, j=n; i<=n, j>=1; i++, j--)
        sumD2 += mat[i][j];

    //cout<<sumD1<<" "<<sumD2<<endl;
}



bool check_validity()
{
    if(n==1){
        ans=1;
        return true;
    }


    for(int i=1; i<=n; i++){
        if(i!=r){
            sum = sumR[i];  ///get sum
            break;
        }
    }
   // cout<<sum<<endl;
   // cout<<"pias"<<endl;

    for(int i=1; i<=n; i++){
        if(i!=r){
            if(sum != sumR[i]){ ///row
                    //cout<<sumR[i]<<endl;
                return false;
            }
        }
    }
    //cout<<"pias"<<endl;

    for(int i=1; i<=n ;i++){
        if(i!=c){
            if(sum!=sumC[i]){      ///col
                return false;
            }
        }
    }
    //cout<<"pias"<<endl;

    if(r != c){
        if(sumD1 != sum)        ///1st diagonal
            return false;
    }
    //cout<<"pias"<<endl;

    //<<sumD2<<endl;
    if(r != n-c+1){
        if(sumD2 != sum)        ///2nd diagonal
            return false;
    }
    //cout<<"pias"<<endl;

    if(sumR[r] != sumC[c])      ///r,c row col
        return false;
    //cout<<"pias"<<endl;

    if(n%2==1){
        if(r==c && r==(n+1)/2){
            if(sumD1 != sumD2)
                return false;
        }
    }
    //cout<<"pias"<<endl;

    if(r!=c && r!=n-c+1)
        if(sumD1 != sumD2)
            return false;
    //cout<<"pias"<<endl;

    return true;
}

bool checkAgain()
{
    counter=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            sumR2[counter] += mat[i][j];
        }
        counter++;
    }

    counter=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            sumC2[counter] += mat[j][i];
        }
        counter++;
    }

    for(int i=1, j=1; i<=n, j<=n; i++, j++)
        sumD12 += mat[i][j];
    int i,j;
    for(i=1, j=n; i<=n, j>=1; i++, j--)
        sumD22 += mat[i][j];

    for(int i=1; i<=n; i++){
        if(sum != sumR2[i]){
            return false;
        }
        if(sum != sumC2[i]){
            return false;
        }
    }

    if(!(sum==sumD12 && sumD12==sumD22))
        return false;
    return true;
}



long long int get_number()
{
    if(ans==0)
        ans = sum - sumR[r];
    ///cout<<sum<<" "<<sumR[r]<<" "<<ans<<endl;
    if(ans<=0)
        return -1;

    mat[r][c] = ans;

    if(checkAgain())
        return ans;
    else
        return -1;
}






int main()
{

    input();
    getSum();
    if(n==1){
        cout<<1;
        return 0;
    }
    if(check_validity())
        cout<<get_number();
    else
        cout<<-1;
    return 0;

}
