#include<bits/stdc++.h>
using namespace std;
double f(double x, double y){
    return x + y;
}
int main(){
    double x0 = 0, h = 0.1, y0 = 1, xn = .3;
    int n = (xn - x0)/h;
    double x = x0, y = y0;
    cout<< "x = "<<"\t\t"<<"y = "<<endl;
    cout<< x <<"\t\t"<<y << endl;
    for(int i =0; i<n; i++){
        double pred = y + h*f(x, y);
        double res = y + (h/2.0)*(f(x,y)+ f(x+h, pred));
        y = res;
        x= x +h;
        cout<< x <<"\t\t"<<y<< endl;
    }
    return 0;
}