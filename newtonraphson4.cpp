#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return pow(x,3)-2*x-5;
}
double f1(double x)
{
    return 3*pow(x,2)-2;
}
void newtonraphson()
{
    double a,b;
    cout<<"Enter root lies between a and b:";
    cin>>a>>b;
    int count=0;
    cout<<"Enter tolarance:";
    double e;
    cin>>e;
    double x1,x0;
    x0=(a+b)/2;
    do
    {
        x1=x0-(f(x0)/f1(x0));
        count++;
        
        if(abs(x1-x0)<=e)break;
        cout<<"iteration :"<<count<<" x1:"<<x1<<" x0 "<<x0<<endl;
       x0=x1;
    } while (true);
    cout<<"root is:"<<x0<<endl;
}
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    newtonraphson();
    return 0;
}