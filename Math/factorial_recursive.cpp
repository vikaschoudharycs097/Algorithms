/***********************************************
 * Calculate factorial of non negative integer
 * 
 * @author Vikas Choudhary
 * @date 01.06.2020
 **********************************************/
#include <iostream>

unsigned long long factorialRecur(int n);

int main(void)
{
    int n;

    // Prompt user for an integer between 0 to 20 and input it
    std::cout << "Enter an integer between 0 to 20: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " is: " << factorialRecur(n) << "\n";

    return 0; 
}

/**
 * Calculate the factorial of non negative number
 * @param1: a non negative integer 'n'
 * @return: Factorial of n
 */ 
unsigned long long factorialRecur(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorialRecur(n - 1);
}