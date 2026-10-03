#include<bits/stdc++.h>
using namespace std;
double f(double x) 
{
    return pow(x,3)-2*x-5;
}
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    double a,b;
    cout<<"Enter two value:";
    cin>>a>>b;
    double e;
    cout<<"decimal point:";
    cin>>e;
    int count=0;
     double f1;
     double x;
    do
    {
        x=(a+b)/2;
       f1=f(x);
        if(f1*f(a)<0)
        {
            b=x;
        }
        else
        {
            a=x;
        }
        count++;
        cout<<"Iteration :"<<count<<" x :"<<fixed<<setprecision(8)<<x<<" f(x): "<<f1<<endl;
    } while (abs(f1)>e);
    cout<<"The root is:"<<x<<endl;
    return 0;
}