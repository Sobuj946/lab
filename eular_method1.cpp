#include<bits/stdc++.h>
using namespace std;
double f(double x,double y)
{
    return x+y;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    double x0=.1,y0=5,h=.01,xn=0.3;
    int n=(xn-x0)/h;
    double x=x0,y=y0;
    cout<<"x\t:"<<x<<"\ty\t:"<<y<<endl;
    for(int i=0;i<n;i++)
    {
        y=y+h*f(x,y);
        
        x=x+h;
        cout<<"x\t:"<<x<<"\ty\t:"<<y<<endl;
    }

    return 0;
}