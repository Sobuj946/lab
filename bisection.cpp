#include<bits/stdc++.h>
using namespace std;
// ax^2 +bx+c
double a=0;
double b=0;
double c=0;
double calculate(double x){
    return(a*x*x+b*x+c);
}
int main(){
 
    for(int i = -5 ;i<=5 ;i++)
    {
        cout<<calculate(i)<<endl;
    }
    double upper_l , lower_l,it;
    cin>>upper_l>>lower_l>>it;

    for(int i = 0;i<it ;i++)
    {
        double app_root = (upper_l+lower_l)/2;
        if(calculate(app_root)*calculate(lower_l)>0)
        {
            lower_l = app_root;
        }
        else{
            upper_l = app_root;
        }
        cout<<app_root<<endl;
    }
    
    return 0;
}