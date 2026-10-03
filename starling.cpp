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
double starling(vector<double>x,vector<double>y,double value)
{
    int n=x.size();
    double diff[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            diff[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)diff[i][0]=y[i];
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
        }
    }
    double h=x[1]-x[0];
    int mid=n/2;
    double p=(value-x[mid])/h;
    double result=diff[mid][0];
    double uTerm=1.0;
    for(int i=1;i<n;i++)
    {
         if (i % 2 == 1) {
            uTerm *= (p - i / 2.0) * (p + i / 2.0);
            result += (uTerm * diff[mid - i / 2][i]) / factorial(i);
        } else {
            uTerm *= (p - i / 2.0) * (p + i / 2.0 - 1);
            result += (uTerm * (diff[mid - i / 2][i] + diff[mid - i / 2 + 1][i]) / 2.0) / factorial(i);
        }
    }
    return result;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<double>x(n);
    vector<double>y(n);
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>y[i];
    double value;
    cin>>value;
    double result=starling(x,y,value);
    cout<<result<<endl;
    return 0;
}