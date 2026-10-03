#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter x values: ";
    for(int i=0; i<n; i++) cin >> x[i];
    cout << "Enter y values: ";
    for(int i=0; i<n; i++) cin >> y[i];

    // Summations
    double sumX=0, sumY=0, sumX2=0, sumX3=0, sumX4=0, sumXY=0, sumX2Y=0;

    for(int i=0; i<n; i++) {
        sumX  += x[i];
        sumY  += y[i];
        sumX2 += x[i]*x[i];
        sumX3 += x[i]*x[i]*x[i];
        sumX4 += x[i]*x[i]*x[i]*x[i];
        sumXY += x[i]*y[i];
        sumX2Y+= x[i]*x[i]*y[i];
    }

    // Normal equations matrix form
    // | n    sumX   sumX2 |   | a |   | sumY  |
    // | sumX sumX2  sumX3 | * | b | = | sumXY |
    // | sumX2 sumX3 sumX4 |   | c |   | sumX2Y|

    vector<vector<double>> A = {
        { (double)n, sumX, sumX2 },
        { sumX, sumX2, sumX3 },
        { sumX2, sumX3, sumX4 }
    };

    vector<double> B = { sumY, sumXY, sumX2Y };

    // Solve using Gaussian Elimination
    int N = 3;
    for(int i=0; i<N; i++){
        // Make diagonal 1
        double diag = A[i][i];
        for(int j=0; j<N; j++) A[i][j] /= diag;
        B[i] /= diag;

        // Eliminate other rows
        for(int k=0; k<N; k++){
            if(k != i){
                double factor = A[k][i];
                for(int j=0; j<N; j++)
                    A[k][j] -= factor * A[i][j];
                B[k] -= factor * B[i];
            }
        }
    }

    double a = B[0], b = B[1], c = B[2];

    cout << fixed << setprecision(6);
    cout << "Fitted parabola: y = " << a << " + " << b << "x + " << c << "x^2" << endl;

    return 0;
}
