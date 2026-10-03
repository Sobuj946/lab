#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int maxi=i;
        for(int j=i+1;j<n;j++)
        {
            if(fabs(m[j][i])>fabs(m[maxi][j]))
            {
                maxi=j;
            }
        }
        for(int j=0;j<n;j++)
        {
            swap(m[i][j],m[maxi][j]);
        }
        if(m[i][i]==0)
        {
            cout<<"No answer\n";
            return;
        }
        for()
    }
    return 0;
}