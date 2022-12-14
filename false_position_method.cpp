#include <iostream>
#include <stdio.h>

using namespace std;

//false position method

double f(double x)
{
    return x*x*x - 2*x - 5;
}

double false_position(double a, double b, double eps)
{
    double c;
    while (b-a > eps)
    {
        c = (a*f(b) - b*f(a))/(f(b) - f(a));
        if (f(a)*f(c) < 0)
            b = c;
        else
            a = c;
    }
    return (a+b)/2;
}

int main()
{
    double a = 1, b = 2, eps = 0.0001;
    cout << "The root is: " << false_position(a, b, eps) << endl;
    return 0;
}