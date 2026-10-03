#include<bits/stdc++.h>
using namespace std;
void simpson_3_by_8(vector<double>x,vector<double>y,int n)
{
    double result=y[0]+y[n-1];
    for(int i=1;i<n-1;i++)
    {
        if(i%3==0)
        {
            result+=2*y[i];
        }
        else
        {
            result+=3*y[i];
        }
    }
    double h=x[1]-x[0];
    cout<<3*h*result/8.0<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<double>x(n);
    vector<double>y(n);
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>y[i];
    simpson_3_by_8(x,y,n);

    return 0;
}