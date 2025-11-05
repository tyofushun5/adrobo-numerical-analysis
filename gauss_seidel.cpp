#include <iostream>
#include "gauss_seidel.h"

double get_x1(double x2, double x3)
{
    return (10.0 - x2 - x3) / 5.0;
}

double get_x2(double x1, double x3)
{
    return (12.0 - x1 - x3) / 4.0;
}

double get_x3(double x1, double x2)
{
    return (13.0 - x1 - 2 * x2) / 3.0;
}

double gauss_seidel(double x1, double x2, double x3)
{
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        x1 = get_x1(x2, x3);
        x2 = get_x2(x1, x3);
        x3 = get_x3(x1, x2);
        std::cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << std::endl;
    }
    return 0;
}

