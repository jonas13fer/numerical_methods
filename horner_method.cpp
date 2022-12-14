#include <iostream>
#include <stdio.h>

using namespace std;

//horner's method

double f(double x)
{
    return x*x*x - 2*x*x + 4*x - 8;
}

double horner(double x0, double eps)
{
    double x1;
    while (abs(f(x0)) > eps)
    {
        x1 = x0 - f(x0)/3;
        x0 = x1;
    }
    return x0;
}

int main()
{
    double x0 = 1, eps = 0.0001;
    cout << "The root is: " << horner(x0, eps) << endl;
    return 0;
}