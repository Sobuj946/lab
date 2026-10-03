#include<bits/stdc++.h>
using namespace std;
double f(double x,double y)
{
    return y-x;
}
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    double x0,y0,h,xn;
    cout<<"Enter x0,y0,xn,h:";
    cin>>x0>>y0>>xn>>h;
    int n=(xn-x0)/h;
    double x=x0,y=y0;
    cout<<"x\t:"<<x<<"\ty\t:"<<y<<endl;
    for(int i=0;i<n;i++)
    {
        double k1=h*f(x,y);
        double k2=h*f(x+h,y+k1);
        y=y+h*(k1+k2)/2.0;
        x=x+h;
        cout<<"x\t:"<<x<<"\ty\t:"<<y<<endl;
    }
    return 0;
}