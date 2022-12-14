#include <iostream>
#include <stdio.h>

using namespace std;

//Secant method

double f(double x)
{
    return x*x*x - 2*x - 5;
}

double secant(double x0, double x1, double eps)
{
    double x2;
    while (abs(f(x1)) > eps)
    {
        x2 = x1 - f(x1)*(x1-x0)/(f(x1)-f(x0));
        x0 = x1;
        x1 = x2;
    }
    return x1;
}

int main()
{
    double x0 = 1, x1 = 2, eps = 0.0001;
    cout << "The root is: " << secant(x0, x1, eps) << endl;
    return 0;
} 
