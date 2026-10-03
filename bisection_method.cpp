#include<bits/stdc++.h>
using namespace std;
double f(int x)
{
    return x*x*x-4*x+5;
}
double bisection(double a,double b,double tol)
{
    double c;
    int iter=0;
    if(f(a)*f(b)>0)
    {
        cout<<"You have not assume right a and b\n";
        return NAN;
    }
    while(fabs(a-b)>=tol)
    {
        c=(a+b)/2.0;
        if(f(c)==0.0)
        {
            break;
        }
        if(f(c)*f(a)>0)
        {
            a=c;
        }
        else
        {
            b=c;
        }
      iter++;
    }
    return c;
}
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    double tol=.00001;
    int a;
    cout<<"Enter lower bound:";
    cin>>a;
    int b;
    cout<<"Enter upper bound :";
    cin>>b;
    double root=bisection(a,b,tol);
    cout<<"The root is:"<<root<<endl;
    return 0;
}