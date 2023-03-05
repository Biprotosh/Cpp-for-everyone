#include<iostream>
#include<cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter side A value : ";
    std::cin >> a;

    std::cout << "Enter side B value : ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "Hypotnous of your triangle is " << c ;
}