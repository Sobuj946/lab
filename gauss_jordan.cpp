#include<bits/stdc++.h>
using namespace std;
void jordan(vector<vector<double>>a,int n)
{
    for(int i=0;i<n;i++)
    {
        double dia=a[i][i];
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
                    a[k][j]-=factor*a[i][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"x"<<i+1<<" = "<<a[i][n]<<endl;
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<vector<double>>a(n,vector<double>(n+1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    jordan(a,n);
    return 0;
}