#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

double central_interpolation(vector<double> x, vector<double> y, double val){
    int n = x.size();
    double diff[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            diff[i][j]=0;
        }
    }

    // first column = y values
    for(int i=0;i<n;i++) diff[i][0]=y[i];

    // forward differences
    for(int j=1;j<n;j++){
        for(int i=0;i<n-j;i++){
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
        }
    }

    int mid = n/2; // middle index
    double h = x[1]-x[0];
    double p = (val - x[mid])/h;
    double result = y[mid];
    double u_term;

    // Central difference interpolation formula
    for(int i=1;i<n;i++){
        if(i%2 != 0){ // odd order
            int idx = mid - (i-1)/2;
            u_term = p;
            for(int j=1;j<i;j++) u_term *= (p-j);
            result += (u_term * diff[idx][i])/factorial(i);
        } else { // even order
            int idx = mid - (i/2) + 1;
            u_term = 1.0;
            for(int j=0;j<i;j++) u_term *= (p-j);
            result += (u_term * diff[idx][i])/factorial(i);
        }
    }

    return result;
}

int main(){
    int n;
    cin>>n;
    vector<double> x(n), y(n);
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];
    double val;
    cin>>val;

    double result = central_interpolation(x,y,val);
    cout<<fixed<<setprecision(6)<<result<<endl;
    return 0;
}
