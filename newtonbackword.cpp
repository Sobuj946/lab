#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
double backward_interpolation(vector<double>x,vector<double>y,double val)
{
    int n=x.size();
    double differ[n][n];
    for(int i=0;i<n;i++)differ[i][0]=y[i];
    for(int j=1;j<n;j++)
    {
        for(int i=n-1;i>=j;i--)
        {
            differ[i][j]=differ[i][j-1]-differ[i-1][j-1];
        }
    }
    double h=x[1]-x[0];
    double p=(val-x[n-1])/h;
    double result=y[n-1];
    double u_term=1.0;
    for(int i=1;i<n;i++)
    {
        u_term*=(p+(i-1));
        result+=(u_term*differ[n-1][i])/factorial(i);
    }
    return result;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<double>x(n);
    vector<double>y(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    int val;
    cin>>val;
    double resutlt=backward_interpolation(x,y,val);
    cout<<resutlt<<endl;
    return 0;
}