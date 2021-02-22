#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    double a;
    double b;
    double result;

    std::cin>>a;
    std::cin>>b;
    if(a <= 0 || b <= 0)
    return 0;

    std::cout << std::fixed<<std::setprecision(6) <<sqrt(a*a+b*b);

    return 0;
}
