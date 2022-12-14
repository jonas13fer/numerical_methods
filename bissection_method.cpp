#include <iostream>
#include <stdio.h>

using namespace std;

//bissection method

double f(double x)
{
    return x*x*x - 2*x - 5;
}

double bissection(double a, double b, double eps)
{
    double c;
    while (b-a > eps)
    {
        c = (a+b)/2;
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
    cout << "The root is: " << bissection(a, b, eps) << endl;
    return 0;
}
