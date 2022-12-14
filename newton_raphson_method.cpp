#include <iostream>
#include <stdio.h>

using namespace std;

//Newton-Raphson method

//Function
double f(double x)
{
    return x*x*x - 2*x - 5;
}

//Derivative of the function
double df(double x)
{
    return 3*x*x - 2;
}

//Newton-Raphson method
double newton_raphson(double x0, double eps)
{
    double x1;
    while (abs(f(x0)) > eps)
    {
        x1 = x0 - f(x0)/df(x0);
        x0 = x1;
    }
    return x0;
}

//Main function
int main()
{
    double x0 = 1, eps = 0.0001;
    cout << "The root is: " << newton_raphson(x0, eps) << endl;
    return 0;
}

