#include<bits/stdc++.h>
using namespace std;
double factorial(double n)
{
 if(n==0 || n==1) return 1.0;
    return n * factorial(n-1);
}
double newtoninterpolation(vector<double>x,vector<double>y,double val)
{
    int n=x.size();
    double v[n][n];
    for(int i=0;i<n;i++)v[i][0]=y[i];
  for(int j=1;j<n;j++) // column: difference order
{
    for(int i=0;i<n-j;i++) // row
    {
        v[i][j] = v[i+1][j-1] - v[i][j-1];
    }
}

    double h=x[1]-x[0];
    double p=(val-x[0])/h;
    double u_term=1.0;
    double result=y[0];
    for(int i=1;i<n;i++)
    {
        u_term*=(p-(i-1));
        result+=(u_term*v[0][i])/factorial(i);
    }
    return result;
}
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<double>x(n),y(n);
    // cout<<"Enter x:";
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    // cout<<"Enter f(x)/y:";
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    // cout<<"Enter the value of interpolation:";
    int val;
    cin>>val;
    double result=newtoninterpolation(x,y,val);
    cout<<result<<endl;
    return 0;
}