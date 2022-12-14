#include <iostream>
#include <stdio.h>

using namespace std;

//Müller's method

double f(double x)
{
    return x*x*x - 2*x - 5;
}

double muller(double x0, double x1, double x2, double eps)
{
    double x3, h1, h2, d1, d2, a, b, c, D;
    while (abs(f(x2)) > eps)
    {
        h1 = x1 - x0;
        h2 = x2 - x1;
        d1 = (f(x1) - f(x0))/h1;
        d2 = (f(x2) - f(x1))/h2;
        a = (d2 - d1)/(h2 + h1);
        b = a*h2 + d2;
        c = f(x2);
        D = sqrt(b*b - 4*a*c);
        if (abs(b - D) < abs(b + D))
        {
            x3 = x2 - 2*c/(b + D);
        }
        else
        {
            x3 = x2 - 2*c/(b - D);
        }
        x0 = x1;
        x1 = x2;
        x2 = x3;
    }
    return x2;
}

int main()
{
    double x0 = 1, x1 = 2, x2 = 3, eps = 0.0001;
    cout << "The root is: " << muller(x0, x1, x2, eps) << endl;
    return 0;
}