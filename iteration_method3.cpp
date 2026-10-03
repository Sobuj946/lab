#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return cbrt(2*x+5);
}
void iteration()
{
    double a,b;
    cout<<"Enter root lies between a and b:";
    cin>>a>>b;
    cout<<"Enter tolarance:";
    double e;
    cin>>e;
    double f1;
    double x=(a+b)/2;
    int count=0;
    do 
    {
        f1=f(x);
        count++;
        cout<<"Iteration :"<<count<<" "<<"x:"<<x<<" Error: "<<fabs(f1-x)<<endl;
        x=f1;
    }
    while(abs(f1-x)>e);
    cout<<"Root is:"<<x<<endl;
}
int main(){
    
    iteration();
    
    return 0;
}