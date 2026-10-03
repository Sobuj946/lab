#include <bits/stdc++.h>
using namespace std;
double f(double x, double y)
{
    return x*x + y;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x0 = 0, y0 = 1.0, xn = .1, h = .05;
    double x = x0, y = y0;
    int n = (xn - x0) / h;
    cout << "x\t:" << x << "\ty\t:" << y << endl;

    for (int i = 0; i < n; i++)
    {
        double pred_y = y + h * f(x, y);
        double current = y + (h / 2.0) * (f(x, y) + f(x + h, pred_y));
        y = pred_y;
        x = x + h;
        cout << "x\t:" << x << "\ty\t:" << y << endl;
    }

    return 0;
}