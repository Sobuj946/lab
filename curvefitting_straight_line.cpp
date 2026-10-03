#include<bits/stdc++.h>
using namespace std;
void curve(vector<double>x,vector<double>y)
{
    int n=x.size();
    double sum_x=0,sum_y=0,sum_xy=0,sum_x2=0;
    for(int i=0;i<n;i++)
    {
        sum_x+=x[i];
        sum_y+=y[i];
        sum_xy+=x[i]*y[i];
        sum_x2+=x[i]*x[i];
    }
    double b=(n*sum_xy-sum_x*sum_y)/(n*sum_x2-sum_x*sum_x);
    double a=(sum_y-b*sum_x)/n;
    cout<<"y="<<b<<"x+"<<a<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<double>x(n);
    vector<double>y(n);
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>y[i];
    curve(x,y);
    return 0;
}