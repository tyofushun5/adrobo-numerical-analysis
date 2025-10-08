#include <iostream>


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
    return (13.0 - 2 * x2 - x2) / 3.0;
}


int main()
{
    double x1 = 1.0;
    double x2 = 1.0;
    double x3 = 1.0;
    int i = 0;

    for (i = 0; i < 100; i++)
    {
        x1 = get_x1(x2, x3);
        x2 = get_x2(x1, x3);
        x3 = get_x3(x1, x2);
        std::cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << std::endl;
    }
    // int x = 0;
    // int sum = 0;
    // for(x = 1; x <= 100; x++)
    // {
    //     sum += x;
    // }
    // std :: cout << "sum = " << sum << std :: endl;

    // auto lang = "C++";
    // std::cout << "Hello and welcome to " << lang << "!\n";
    //
    // for (int i = 1; i <= 5; i++)
    // {
    //     std::cout << "i = " << i << std::endl;
    // }

    return 0;
}