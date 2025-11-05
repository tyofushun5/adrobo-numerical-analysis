#include "newton.h"
#include <stdio.h>
#include <math.h>

#define EPS 0.000001
#define NMAX 100

double f (double x)
{
    return(x + cos(x));
}

double df (double x)
{
    return(1 - sin(x));
}

double newton()
{
    double x, d;
    int n = 0;

    x = 1.0; /* initial value */
    do
    {
        printf("[%d] x = %f\n", n, x);
        d = -f(x) / df(x);
        x += d;
        n++;
    } while (fabs(d) > EPS && n < NMAX);

    if (n == NMAX + 1)
        printf("error!\n");
    else
        printf("[%d] x = %f\n", n, x);
    return 0;
}