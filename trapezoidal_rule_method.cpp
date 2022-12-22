#include <iostream>
#include <stdio.h>

using namespace std;

//Trapezoidal rule

double f(double x)
{
    return 1/(1+x*x);
}

double trapezoidal(double a, double b, int n)
{
    double h = (b-a)/n;
    double sum = 0.5*(f(a)+f(b));
    for(int i=1; i<n; i++)
    {
        sum += f(a+i*h);
    }
    return h*sum;
}

int main()
{
    double a = 0;
    double b = 1;
    int n = 1000000;
    double result = trapezoidal(a,b,n);
    cout << "Result: " << result << endl;
    return 0;
}

// Output:
// Result: 0.785398
// Time: 0.000s
// Memory: 0.000MB
// Language: cpp
