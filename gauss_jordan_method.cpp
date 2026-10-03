#include<bits/stdc++.h>
using namespace std;
void gaussjordan(vector<vector<double>>a,int n)
{
    for(int i=0;i<n;i++)
    {
        double dia=a[i][i];
        // if(dia==0)
        // {
        //     cout<<"Not diagonal matrix\n";
        //     return;
        // }
        for(int j=0;j<=n;j++)
        {
            a[i][j]=a[i][j]/dia;
        }
        for(int k=0;k<n;k++)
        {
            if(i!=k)
            {
                double factor=a[k][i];
                for(int j=0;j<=n;j++)
                {
                     a[k][j] -= factor * a[i][j];
                }
            }
        }
    }
    cout << "\nSolutions:\n";
    for(int i=0; i<n; i++) {
        cout << "x" << i+1 << " = " << a[i][n] << endl;
    }
}
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

     int n,m;
     cin>>n>>m;
     vector<vector<double>>a(n,vector<double>(n+1));
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<=n;j++)
        {
            cin>>a[i][j];
        }
     }
     gaussjordan(a,n);
    return 0;
}