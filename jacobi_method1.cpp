#include<bits/stdc++.h>
using namespace std;
double f1(double x,double y,double z)
{
    return (4-2*y+z)/6.0;
}
double f2(double x,double y,double z)
{
    return (3-x-z)/5.0;
}
double f3(double x,double y,double z)
{
    return (27-2*x-y)/4.0;
}
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    double x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3;
    double e;
    cout<<"Enter e:";
    cin>>e;
    int i=0;
    do
    {
        x1=f1(x0,y0,z0);
        y1=f2(x0,y0,z0);
        z1=f3(x0,y0,z0);
        cout<<"x:\t"<<x1<<"\ty:\t"<<y1<<"\tz:\t"<<z1<<endl;
         e1=fabs(x1-x0);
        e2=fabs(y1-y0);
        e3=fabs(z1-z0);
        x0=x1;
        y0=y1;
        z0=z1;
       
        i++;

        
    } while (e1>e&&e2>e&&e3>e);
    
    return 0;
}