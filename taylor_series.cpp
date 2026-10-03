#include <bits/stdc++.h>
using namespace std;

// f(x,y) = dy/dx
double f(double x, double y) {
    return x + y;  
}

// partial derivative of f wrt x
double fx(double x, double y) {
    return 1.0;
}

// partial derivative of f wrt y
double fy(double x, double y) {
    return 1.0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double x0 = 0.0, y0 = 1.0, h = 0.1, xn = 0.3;
    int n = (xn - x0) / h;

    double x = x0, y = y0;
    cout << "x = " << x << "\t y = " << y << endl;

    for (int i = 0; i < n; i++) {
        double dydx = f(x, y);
        double d2ydx2 = fx(x, y) + fy(x, y) * dydx; // second derivative term

        // Taylor series up to 2nd order
        y = y + h * dydx + (h * h / 2.0) * d2ydx2;
        x = x + h;

        cout << "x = " << x << "\t y = " << y << endl;
    }

    return 0;
}
