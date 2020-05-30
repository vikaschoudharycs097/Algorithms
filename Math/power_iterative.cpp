/*********************************************
 * Calculate a ^ b where b is an integer >= 0
 * 
 * @author Vikas Choudhary
 * @date 30.05.2020
 *********************************************/

#include <iostream>

long long powerIter(int a, int b);

int main(void)
{
    int a, b;

    // Prompt user for base and input it
    std::cout << "Enter base: ";
    std::cin >> a;

    // Prompt user for exponent and input it
    std::cout << "Enter exponent(non negative): ";
    std::cin >> b;
    while (b < 0)
    {
        std::cout << "Retry: ";
        std::cin >> b;
    }

    std::cout << a << " ^ " << b << " = " << powerIter(a, b) << "\n";

    return 0;
}

/**
 * Return a to the power b
 * @param1: An integer which is base(i.e 'a')
 * @param2: An non negative integer which is exponent(i.e. 'b')
 * @return: a ^ b
 */ 
long long powerIter(int a, int b)
{
    if (b < 0)
    {
        return 0;
    }
    
    long long result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }

    return result;
}