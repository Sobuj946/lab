#include<bits/stdc++.h>
using namespace std;

void simpsononethird(vector<double> x, vector<double> y)
{
    int n = x.size();
    if ((n-1) % 2 != 0) {
        cout << "Error: Simpson's 1/3 rule requires even number of intervals (odd number of points).\n";
        return;
    }

    double result = y[0] + y[n-1];
    double h = x[1] - x[0]; // assuming equal spacing

    for(int i=1; i<n-1; i++) {
        if(i % 2 == 0)
            result += 2 * y[i];
        else
            result += 4 * y[i];
    }
    cout << (h/3.0) * result << endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n;
    cin >> n;
    vector<double> x(n), y(n);
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=0;i<n;i++) cin >> y[i];
    simpsononethird(x,y);

    return 0;
}
