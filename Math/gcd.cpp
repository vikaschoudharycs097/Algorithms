/*********************************************
 * Calculate gcd of two positive integers
 * 
 * @author Vikas Choudhary
 * @date 27.05.2020
 ********************************************/

#include <iostream>

int gcd(int a, int b);

int main(void)
{
    int a, b;

    // Prompt user for two positive integers and input them
    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;

    std::cout << "Greatest common division of " << a << " and " << b << " is " << gcd(a, b) << "\n";

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }

    int tmp;
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}